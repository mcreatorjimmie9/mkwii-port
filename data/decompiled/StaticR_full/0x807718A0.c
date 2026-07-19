/* Function at 0x807718A0, size=160 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807718A0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    *(0x7c + r1) = r31; // stw @ 0x807718AC
    r31 = r3;
    r7 = *(0 + r3); // lwz @ 0x807718B4
    if (==) goto 0x0x80771a90;
    r0 = *(4 + r3); // lwz @ 0x807718C0
    if (!=) goto 0x0x80771968;
    r6 = *(0x10 + r7); // lwz @ 0x807718CC
    r0 = *(0x14 + r7); // lwz @ 0x807718D4
    *(0x54 + r1) = r0; // stw @ 0x807718DC
    r5 = r31 + 0x10; // 0x807718E0
    *(0x50 + r1) = r6; // stw @ 0x807718E4
    r0 = *(0x18 + r7); // lwz @ 0x807718E8
    *(0x58 + r1) = r0; // stw @ 0x807718EC
    FUN_805A4498(r5); // bl 0x805A4498
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = *(0 + r31); // lwz @ 0x807718FC
    /* lfs f0, 8(r3) */ // 0x80771900
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80771904
    if (<=) goto 0x0x8077195c;
    r0 = *(0x60 + r31); // lbz @ 0x8077190C
    if (!=) goto 0x0x8077195c;
    /* lis r4, 0 */ // 0x80771918
    /* lfs f1, 0(r4) */ // 0x80771920
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    /* lfs f1, 0x40(r31) */ // 0x8077192C
    /* lfs f0, 0x68(r1) */ // 0x80771930
    /* lfs f2, 0x44(r31) */ // 0x80771934
    /* fadds f0, f1, f0 */ // 0x80771938
    /* lfs f1, 0x48(r31) */ // 0x8077193C
}