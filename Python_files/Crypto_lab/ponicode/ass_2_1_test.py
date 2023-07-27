import ass_2_1

class Test_Ass_2_1_Hex2bin:
    def test_hex2bin_1(self):
        result = ass_2_1.hex2bin(["email@Google.com", "TestUpperCase@Example.com", "ponicode.com", "ponicode.com"])

    def test_hex2bin_2(self):
        result = ass_2_1.hex2bin(["email@Google.com", "bed-free@tutanota.de", "user1+user2@mycompany.com", "email@Google.com"])

    def test_hex2bin_3(self):
        result = ass_2_1.hex2bin(["TestUpperCase@Example.com", "something.example.com", "bed-free@tutanota.de", "user1+user2@mycompany.com"])

    def test_hex2bin_4(self):
        result = ass_2_1.hex2bin(["TestUpperCase@Example.com", "user1+user2@mycompany.com", "something.example.com", "user1+user2@mycompany.com"])

    def test_hex2bin_5(self):
        result = ass_2_1.hex2bin(["ponicode.com", "ponicode.com", "user1+user2@mycompany.com", "bed-free@tutanota.de"])

    def test_hex2bin_6(self):
        result = ass_2_1.hex2bin([])

