/* Function at 0x806C4EC8, size=300 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 11 function(s) */

int FUN_806C4EC8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806C4EE4
    r28 = r3;
    r0 = *(0x240 + r4); // lwz @ 0x806C4EEC
    if (==) goto 0x0x806c4f04;
    if (==) goto 0x0x806c4f24;
    /* b 0x806c4fd4 */ // 0x806C4F00
    /* li r0, 0 */ // 0x806C4F04
    *(0xb08 + r3) = r0; // stw @ 0x806C4F08
    r3 = r29;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r28;
    /* li r4, 0 */ // 0x806C4F18
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x806c4fd4 */ // 0x806C4F20
    /* li r0, 1 */ // 0x806C4F24
    *(0xb08 + r3) = r0; // stw @ 0x806C4F28
    /* lis r31, 0 */ // 0x806C4F2C
    r3 = *(0 + r31); // lwz @ 0x806C4F30
    r4 = *(0 + r3); // lwz @ 0x806C4F34
    r0 = *(0 + r4); // lwz @ 0x806C4F38
    if (==) goto 0x0x806c4f50;
    if (==) goto 0x0x806c4f90;
    /* b 0x806c4fc0 */ // 0x806C4F4C
    /* li r4, 0x7c */ // 0x806C4F50
    /* li r5, 0 */ // 0x806C4F54
    FUN_80698C44(r4, r5); // bl 0x80698C44
    r30 = *(0 + r31); // lwz @ 0x806C4F5C
    r3 = r29;
    FUN_8064A384(r4, r5, r3); // bl 0x8064A384
    /* fctiwz f0, f1 */ // 0x806C4F68
    r3 = r30;
    /* li r5, 0xff */ // 0x806C4F70
    /* stfd f0, 8(r1) */ // 0x806C4F74
    r4 = *(0xc + r1); // lwz @ 0x806C4F78
    FUN_80698CD0(r3, r5); // bl 0x80698CD0
    r3 = *(0 + r31); // lwz @ 0x806C4F80
    r3 = *(0 + r3); // lwz @ 0x806C4F84
    FUN_80686240(); // bl 0x80686240
    /* b 0x806c4fc0 */ // 0x806C4F8C
    /* li r4, 0xa0 */ // 0x806C4F90
    /* li r5, 0 */ // 0x806C4F94
    FUN_80698C44(r4, r5); // bl 0x80698C44
    r30 = *(0 + r31); // lwz @ 0x806C4F9C
    r3 = r29;
    FUN_8064A384(r4, r5, r3); // bl 0x8064A384
    /* fctiwz f0, f1 */ // 0x806C4FA8
    r3 = r30;
    /* li r5, 0xff */ // 0x806C4FB0
    /* stfd f0, 8(r1) */ // 0x806C4FB4
    r4 = *(0xc + r1); // lwz @ 0x806C4FB8
    FUN_80698CD0(r3, r5); // bl 0x80698CD0
    r3 = r29;
    FUN_8064A384(r5, r3); // bl 0x8064A384
    r3 = r28;
    /* li r4, 1 */ // 0x806C4FCC
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x806C4FD4
    r31 = *(0x1c + r1); // lwz @ 0x806C4FD8
    r30 = *(0x18 + r1); // lwz @ 0x806C4FDC
    r29 = *(0x14 + r1); // lwz @ 0x806C4FE0
    r28 = *(0x10 + r1); // lwz @ 0x806C4FE4
    return;
}