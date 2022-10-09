// SPDX-License-Identifier: UNLICENSED
pragma solidity >=0.5.0 <0.9.0;

contract smart_contract {
    string public name;
    string public greetingPrefix = "Hello ";

    function setname(string memory newname) public {
        name = newname;
    }

    function getgreetings() public view returns (string memory) {
        return string(abi.encodePacked(greetingPrefix, name));
    }
}
