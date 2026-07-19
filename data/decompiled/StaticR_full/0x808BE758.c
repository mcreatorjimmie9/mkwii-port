/* Function at 0x808BE758, size=160 bytes */
/* Stack frame: 48 bytes */
/* Calls: 2 function(s) */

int FUN_808BE758(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* lis r3, 0 */ // 0x808BE760
    *(0x34 + r1) = r0; // stw @ 0x808BE764
    /* li r0, 0 */ // 0x808BE768
    *(8 + r1) = r0; // stb @ 0x808BE770
    r3 = *(0 + r3); // lwz @ 0x808BE774
    *(0xc + r1) = r0; // stw @ 0x808BE778
    FUN_806F9214(r4); // bl 0x806F9214
    FUN_808BE624(r4); // bl 0x808BE624
    /* li r7, 0 */ // 0x808BE784
    /* li r5, 0 */ // 0x808BE788
    /* lis r4, 0 */ // 0x808BE78C
    /* b 0x808be7c4 */ // 0x808BE790
    r3 = r3 + r5; // 0x808BE794
    r6 = *(0x29 + r3); // lbz @ 0x808BE798
    if (==) goto 0x0x808be7bc;
    r0 = r7 + 1; // 0x808BE7A4
    r3 = *(0 + r4); // lwz @ 0x808BE7A8
    /* clrlwi r0, r0, 0x18 */ // 0x808BE7AC
    /* mulli r0, r0, 0xf0 */ // 0x808BE7B0
    r3 = r3 + r0; // 0x808BE7B4
    *(0xc20 + r3) = r6; // stw @ 0x808BE7B8
    r5 = r5 + 2; // 0x808BE7BC
    r7 = r7 + 1; // 0x808BE7C0
    r3 = *(0xc + r1); // lwz @ 0x808BE7C4
    /* li r0, 0xb */ // 0x808BE7C8
    r6 = *(0x26 + r3); // lhz @ 0x808BE7CC
    if (>=) goto 0x0x808be7dc;
    r0 = r6;
    /* clrlwi r0, r0, 0x10 */ // 0x808BE7DC
    if (<) goto 0x0x808be794;
    r0 = *(0x34 + r1); // lwz @ 0x808BE7E8
    return;
}