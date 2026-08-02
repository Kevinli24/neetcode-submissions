class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t mask = 0x01;
        int count = 0;

        for (int i = 0; i < 32; ++i)
        {
            if ((mask & n) == 0x01)
            {
                ++count;
            }
            n = (n >> 1);

        }
        return count;

    }
};
