/* Function at 0x805EBBF4, size=60 bytes */
/* Stack frame: 0 bytes */

int FUN_805EBBF4(int r3, int r4)
{
    r0 = *(0x3c + r3); // lwz @ 0x805EBBF4
    r4 = r3;
    /* li r3, 0 */ // 0x805EBBFC
    if (==) goto 0x0x805ebc14;
    if (==) goto 0x0x805ebc20;
    /* b 0x805ebc2c */ // 0x805EBC10
    /* lis r3, 0 */ // 0x805EBC14
    r3 = *(0 + r3); // lwz @ 0x805EBC18
    /* b 0x805ebc2c */ // 0x805EBC1C
    /* lis r3, 0 */ // 0x805EBC20
    r3 = r3 + 0; // 0x805EBC24
    r3 = *(4 + r3); // lwz @ 0x805EBC28
    /* b 0x805f32dc */ // 0x805EBC2C
}