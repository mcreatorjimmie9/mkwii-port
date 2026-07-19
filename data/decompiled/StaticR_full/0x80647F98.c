/* Function at 0x80647F98, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80647F98(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80647FA0
    *(0xc + r1) = r31; // stw @ 0x80647FA8
    *(8 + r1) = r30; // stw @ 0x80647FAC
    r31 = *(0 + r4); // lwz @ 0x80647FB0
    if (==) goto 0x0x80648034;
    /* li r0, 0 */ // 0x80647FBC
    *(0 + r4) = r0; // stw @ 0x80647FC0
    if (==) goto 0x0x80648034;
    if (==) goto 0x0x8064802c;
    /* lis r3, 0 */ // 0x80647FCC
    r3 = r3 + 0; // 0x80647FD0
    *(0 + r31) = r3; // stw @ 0x80647FD4
    r30 = *(0 + r4); // lwz @ 0x80647FD8
    if (==) goto 0x0x80648020;
    *(0 + r4) = r0; // stw @ 0x80647FE4
    if (==) goto 0x0x80648020;
    if (==) goto 0x0x80648018;
    *(0 + r30) = r3; // stw @ 0x80647FF0
    r3 = *(0 + r4); // lwz @ 0x80647FF4
    if (==) goto 0x0x8064800c;
    *(0 + r4) = r0; // stw @ 0x80648000
    /* li r4, 1 */ // 0x80648004
    FUN_8064804C(r4); // bl 0x8064804C
    r3 = r30;
    /* li r4, 0 */ // 0x80648010
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x80648024
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x80648034
    r31 = *(0xc + r1); // lwz @ 0x80648038
    r30 = *(8 + r1); // lwz @ 0x8064803C
    return;
}