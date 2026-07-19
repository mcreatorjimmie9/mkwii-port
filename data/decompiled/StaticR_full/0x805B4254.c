/* Function at 0x805B4254, size=152 bytes */
/* Stack frame: 0 bytes */

int FUN_805B4254(int r3, int r4, int r5, int r6)
{
    if (==) goto 0x0x805b42b4;
    /* mulli r0, r4, 0xc */ // 0x805B425C
    r6 = r3 + r0; // 0x805B4260
    r0 = *(0x4120 + r6); // lhz @ 0x805B4264
    *(0 + r5) = r0; // sth @ 0x805B4268
    r0 = *(0x4122 + r6); // lbz @ 0x805B426C
    *(2 + r5) = r0; // stb @ 0x805B4270
    r0 = *(0x4123 + r6); // lbz @ 0x805B4274
    *(3 + r5) = r0; // stb @ 0x805B4278
    r0 = *(0x4124 + r6); // lbz @ 0x805B427C
    *(4 + r5) = r0; // stb @ 0x805B4280
    r0 = *(0x4125 + r6); // lbz @ 0x805B4284
    *(5 + r5) = r0; // stb @ 0x805B4288
    r0 = *(0x4126 + r6); // lbz @ 0x805B428C
    *(6 + r5) = r0; // stb @ 0x805B4290
    r0 = *(0x4127 + r6); // lbz @ 0x805B4294
    *(7 + r5) = r0; // stb @ 0x805B4298
    r0 = *(0x4128 + r6); // lbz @ 0x805B429C
    *(8 + r5) = r0; // stb @ 0x805B42A0
    r0 = *(0x4129 + r6); // lbz @ 0x805B42A4
    *(9 + r5) = r0; // stb @ 0x805B42A8
    r0 = *(0x412a + r6); // lbz @ 0x805B42AC
    *(0xa + r5) = r0; // stb @ 0x805B42B0
    /* mulli r0, r4, 0xc */ // 0x805B42B4
    r3 = r3 + r0; // 0x805B42B8
    r0 = *(0x412a + r3); // lbz @ 0x805B42BC
    /* extsb. r0, r0 */ // 0x805B42C0
    if (==) goto 0x0x805b42d4;
    if (==) goto 0x0x805b42dc;
    /* b 0x805b42e4 */ // 0x805B42D0
    /* li r3, 0 */ // 0x805B42D4
    return;
    /* li r3, 2 */ // 0x805B42DC
    return;
    /* li r3, 1 */ // 0x805B42E4
    return;
}