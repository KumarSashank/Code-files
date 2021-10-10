#include <iostream>
#include <string>
#include <queue>
#include <unordered_map>
using namespace std;
struct Node
{
    char c;
    int f;
    Node *l;
    Node *r;
};
Node *get(char c, int f, Node *l, Node *r)
{
    Node *node = new Node();
    node->c = c;
    node->f = f;
    node->l = l;
    node->r = r;
    return node;
}
struct comp
{
    bool operator()(Node *l, Node *r)
    {
        return l->f > r->f;
    }
};
void encode(Node *root, string s, unordered_map<char, string> &huffman)
{
    if (root == nullptr)
    {
        return;
    }
    if (!root->l && !root->l)
    {
        huffman[root->c] = s;
    }
    encode(root->l, s + "0", huffman);
    encode(root->r, s + "1", huffman);
}
void decode(Node *root, int &in, string s)
{
    if (root == nullptr)
    {
        return;
    }
    if (!root->l && !root->r)
    {
        cout << root->c;
        return;
    }
    in++;
    if (s[in] == '0')
    {
        decode(root->l, in, s);
    }
    else
    {
        decode(root->r, in, s);
    }
}
void create_huffman(string s)
{
    unordered_map<char, int> freq;
    for (auto i : s)
    {
        freq[i]++;
    }
    priority_queue<Node *, vector<Node *>, comp> pq;
    for (auto i : freq)
    {
        pq.push(get(i.first, i.second, nullptr, nullptr));
    }
    while (pq.size() != 1)
    {
        Node *l = pq.top();
        pq.pop();
        Node *r = pq.top();
        pq.pop();
        int sum = l->f + r->f;
        pq.push(get('\0', sum, l, r));
    }
    Node *root = pq.top();
    unordered_map<char, string> huffman;
    encode(root, "", huffman);
    cout << "Huffman Codes: \n";
    for (auto i : huffman)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "Original string: " << s << endl;
    string str = "";
    for (char i : s)
    {
        str = str + huffman[i];
    }
    cout << "Encoded string: " << str << endl;
    int in = -1;
    cout << "Decoded string: ";
    while (in < (int)str.size() - 2)
    {
        decode(root, in, str);
    }
}
int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    create_huffman(s);
    return 0;
}