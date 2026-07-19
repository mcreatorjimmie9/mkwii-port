/* Function at 0x8074C8D8, size=260 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8074C8D8(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x58 + r1) = r30; // stw @ 0x8074C8E8
    r30 = r3;
    FUN_808A1BCC(); // bl 0x808A1BCC
    r5 = *(0x58 + r30); // lwz @ 0x8074C8F4
    /* lis r4, 0 */ // 0x8074C8F8
    r0 = *(0x5c + r30); // lwz @ 0x8074C8FC
    *(0x24 + r1) = r0; // stw @ 0x8074C904
    r4 = r4 + 0; // 0x8074C908
    *(0x20 + r1) = r5; // stw @ 0x8074C90C
    r5 = *(0x60 + r30); // lwz @ 0x8074C910
    r0 = *(0x64 + r30); // lwz @ 0x8074C914
    *(0x2c + r1) = r0; // stw @ 0x8074C918
    *(0x28 + r1) = r5; // stw @ 0x8074C91C
    r5 = *(0x68 + r30); // lwz @ 0x8074C920
    r0 = *(0x6c + r30); // lwz @ 0x8074C924
    *(0x34 + r1) = r0; // stw @ 0x8074C928
    *(0x30 + r1) = r5; // stw @ 0x8074C92C
    r5 = *(0x70 + r30); // lwz @ 0x8074C930
    r0 = *(0x74 + r30); // lwz @ 0x8074C934
    *(0x3c + r1) = r0; // stw @ 0x8074C938
    *(0x38 + r1) = r5; // stw @ 0x8074C93C
    r5 = *(0x78 + r30); // lwz @ 0x8074C940
    r0 = *(0x7c + r30); // lwz @ 0x8074C944
    *(0x44 + r1) = r0; // stw @ 0x8074C948
    *(0x40 + r1) = r5; // stw @ 0x8074C94C
    r5 = *(0x80 + r30); // lwz @ 0x8074C950
    r0 = *(0x84 + r30); // lwz @ 0x8074C954
    *(0x4c + r1) = r0; // stw @ 0x8074C958
    *(0x48 + r1) = r5; // stw @ 0x8074C95C
    /* lfs f1, 0x124(r30) */ // 0x8074C960
    FUN_805A443C(); // bl 0x805A443C
    r4 = r30 + 0x30; // 0x8074C96C
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f2, 8(r1) */ // 0x8074C978
    /* li r31, 0 */ // 0x8074C97C
    /* lfs f1, 0xc(r1) */ // 0x8074C980
    /* lfs f0, 0x10(r1) */ // 0x8074C984
    /* stfs f2, 0x2c(r1) */ // 0x8074C988
    /* stfs f1, 0x3c(r1) */ // 0x8074C98C
    /* stfs f0, 0x4c(r1) */ // 0x8074C990
    r30 = *(8 + r30); // lwz @ 0x8074C994
    r3 = *(0x14 + r30); // lwz @ 0x8074C998
    r3 = *(0 + r3); // lwz @ 0x8074C99C
    if (==) goto 0x0x8074c9b4;
    /* li r4, 0 */ // 0x8074C9AC
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x8074C9B4
    r30 = r30 + 4; // 0x8074C9B8
    if (<) goto 0x0x8074c998;
    r0 = *(0x64 + r1); // lwz @ 0x8074C9C4
    r31 = *(0x5c + r1); // lwz @ 0x8074C9C8
    r30 = *(0x58 + r1); // lwz @ 0x8074C9CC
    return;
}