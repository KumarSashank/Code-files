file=open("/Users/kumarsashank/Desktop/Code files/Python files/cls_files/Text.txt")
vowel_count=0
consonants_count=0
# for line in file:
#     a=line
#     x=len(a)
#     for i in range(x):
#         if(a[i]=='a'or a[i]=='e' or a[i]=='i' or a[i]=='o' or a[i]=='u' ):
#             count=count+1
# print(count)

vowels=['a', 'e', 'i', 'o', 'u', 'A','E', 'I', 'O','U']
consonants=['b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z']
for line in file:
    a=line
    for ch in a:
        if ch in vowels:
            vowel_count=vowel_count+1
        if ch in consonants:
            consonants_count=consonants_count+1

print("The no.of vowels are ",vowel_count)
print("The no.of consonants are ",consonants_count)
print("The total no.of alphabets are ",vowel_count+consonants_count)
