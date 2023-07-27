dict1={'A':'A','B':'N','C':'D','D':'R','E':'E','F':'W','G':'I','H':'C','I':'K','J':'S','K':'O','L':'H','M':'T','N':'B','O':'F','P':'G','Q':'J','R':'L','S':'M','T':'P','U':'Q','V':'U','W':'V','X':'X','Y':'Y','Z':'Z'}
# input_text='wewishtoreplaceplayer'
input_text='seemseaomedsamhl'
input_text=input_text.upper()

length=len(input_text)

list1=list(input_text)
input_text=''
for i in range(length):
    list1[i]=dict1[list1[i]]
    input_text+=list1[i]
# print(list1)
print(input_text)