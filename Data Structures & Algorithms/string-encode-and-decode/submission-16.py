class Solution:

    def encode(self, strs: List[str]) -> str:
        if len(strs) == 0:
            return "_EMPTY_"
        new_strs = []
        for index, statement in enumerate(strs):
            if statement == "" and index != len(strs)-1:
                new_strs.append("_EMPTYSTRING__END_")
            elif statement == "" and index == len(strs)-1:
                new_strs.append("_EMPTYSTRING_")
            elif statement and index != len(strs)-1:
                new_strs.append(statement + "_END_")
            else:
                new_strs.append(statement)
        print(new_strs)
        encodedstr = "".join(new_strs)
        return encodedstr

    def decode(self, s: str) -> List[str]:
        if s == "_EMPTY_":
            return []

        decodedstr = s.split("_END_")

        for i in range(len(decodedstr)):
            if decodedstr[i] == "_EMPTYSTRING_":
                decodedstr[i] = ""
        
        
        

        return decodedstr

