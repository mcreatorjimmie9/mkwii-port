/* Function at 0x805B412C, size=60 bytes */
/* Stack frame: 0 bytes */

int FUN_805B412C(int r3, int r4, int r5, int r6, int r7)
{
    /* mulli r0, r4, 0xec */ // 0x805B412C
    r7 = r3;
    /* li r5, 0 */ // 0x805B4134
    r3 = r3 + r0; // 0x805B4138
    r6 = *(8 + r3); // lwz @ 0x805B413C
    /* mulli r0, r4, 0xa8 */ // 0x805B4140
    r3 = r3 + 4; // 0x805B4144
    r4 = r7 + r0; // 0x805B414C
    r4 = r4 + 0x3e60; // 0x805B4150
    if (==) goto 0x0x805b4160;
    r6 = *(0x51 + r6); // lbz @ 0x805B4158
    /* b 0x805b4164 */ // 0x805B415C
    /* li r6, 0 */ // 0x805B4160
    /* b 0x805b1470 */ // 0x805B4164
}