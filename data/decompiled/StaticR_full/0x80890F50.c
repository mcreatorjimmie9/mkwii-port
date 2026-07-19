/* Function at 0x80890F50, size=280 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_80890F50(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r5, 0 */ // 0x80890F58
    /* lis r31, 0 */ // 0x80890F64
    r31 = r31 + 0; // 0x80890F68
    *(0x28 + r1) = r30; // stw @ 0x80890F6C
    r30 = r3;
    *(0x24 + r1) = r29; // stw @ 0x80890F74
    /* lis r29, 0 */ // 0x80890F78
    r29 = r29 + 0; // 0x80890F7C
    *(0x20 + r1) = r28; // stw @ 0x80890F80
    r28 = r4;
    FUN_8089B9C4(); // bl 0x8089B9C4
    /* lfs f1, 0x6c(r29) */ // 0x80890F8C
    /* lis r3, 0 */ // 0x80890F90
    /* lfs f2, 0x68(r29) */ // 0x80890F94
    r3 = r3 + 0; // 0x80890F98
    /* lfs f0, 0x70(r29) */ // 0x80890F9C
    /* li r0, 1 */ // 0x80890FA0
    *(0 + r30) = r3; // stw @ 0x80890FA4
    /* lis r3, 0 */ // 0x80890FA8
    /* stfs f2, 0xac(r30) */ // 0x80890FAC
    /* stfs f1, 0xb0(r30) */ // 0x80890FB0
    /* stfs f1, 0xb4(r30) */ // 0x80890FB4
    /* stfs f0, 0xb8(r30) */ // 0x80890FB8
    *(0x40 + r31) = r0; // stw @ 0x80890FBC
    r5 = *(0 + r28); // lwz @ 0x80890FC0
    r4 = *(0x2a + r5); // lha @ 0x80890FC4
    r0 = r4 + -1; // 0x80890FC8
    /* cntlzw r4, r0 */ // 0x80890FCC
    /* rlwinm. r0, r4, 0x1b, 0x18, 0x1f */ // 0x80890FD0
    /* srwi r0, r4, 5 */ // 0x80890FD4
    *(0 + r3) = r0; // stb @ 0x80890FD8
    if (!=) goto 0x0x80891084;
    /* li r3, 0x128 */ // 0x80890FE0
    FUN_805E3430(r3); // bl 0x805E3430
    r29 = r3;
    if (==) goto 0x0x80891034;
    /* lis r5, 0 */ // 0x80890FF4
    r4 = r28;
    r5 = r5 + 0; // 0x80890FFC
    FUN_807E5F20(r5, r4, r5); // bl 0x807E5F20
    /* lis r4, 0 */ // 0x80891004
    /* li r3, 0x7c */ // 0x80891008
    r4 = r4 + 0; // 0x8089100C
    *(0 + r29) = r4; // stw @ 0x80891010
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    if (==) goto 0x0x80891030;
    /* lis r4, 0 */ // 0x80891020
    /* li r5, 0 */ // 0x80891024
    r4 = r4 + 0; // 0x80891028
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
    *(0x104 + r29) = r3; // stw @ 0x80891030
    *(0x10c + r30) = r29; // stw @ 0x80891034
    r0 = *(0x2c + r29); // lhz @ 0x80891038
    /* lfs f0, 0x18(r31) */ // 0x8089103C
    r0 = r0 | 1; // 0x80891040
    *(0x2c + r29) = r0; // sth @ 0x80891044
    /* stfs f0, 0x34(r29) */ // 0x80891048
    r3 = *(0x10c + r30); // lwz @ 0x8089104C
    /* lfs f0, 0x1c(r31) */ // 0x80891050
    r0 = *(0x2c + r3); // lhz @ 0x80891054
    r0 = r0 | 8; // 0x80891058
    *(0x2c + r3) = r0; // sth @ 0x8089105C
    /* stfs f0, 0x3c(r3) */ // 0x80891060
    /* stfs f0, 0x40(r3) */ // 0x80891064
}