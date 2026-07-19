/* Function at 0x807C8F80, size=164 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807C8F80(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x807C8F94
    r4 = *(0xbc + r3); // lwz @ 0x807C8F98
    r30 = *(0 + r4); // lwz @ 0x807C8F9C
    r3 = r30;
    FUN_807B6180(r3); // bl 0x807B6180
    if (==) goto 0x0x807c8fc4;
    r3 = *(0 + r30); // lwz @ 0x807C8FB0
    r3 = *(4 + r3); // lwz @ 0x807C8FB4
    r0 = *(8 + r3); // lwz @ 0x807C8FB8
    /* clrlwi. r0, r0, 0x1f */ // 0x807C8FBC
    if (==) goto 0x0x807c8fcc;
    /* li r3, 0 */ // 0x807C8FC4
    /* b 0x807c90a0 */ // 0x807C8FC8
    r3 = *(0xf0 + r31); // lwz @ 0x807C8FCC
    r0 = r3 + 1; // 0x807C8FD0
    *(0xf0 + r31) = r0; // stw @ 0x807C8FD4
    if (<=) goto 0x0x807c907c;
    r3 = r30;
    FUN_8061DA88(r3); // bl 0x8061DA88
    r6 = *(0 + r3); // lwz @ 0x807C8FE8
    r0 = *(4 + r3); // lwz @ 0x807C8FF0
    r5 = r31 + 0xd4; // 0x807C8FF4
    *(0x18 + r1) = r0; // stw @ 0x807C8FF8
    *(0x14 + r1) = r6; // stw @ 0x807C8FFC
    r0 = *(8 + r3); // lwz @ 0x807C9000
    *(0x1c + r1) = r0; // stw @ 0x807C9008
    FUN_805A4498(r3); // bl 0x805A4498
    /* lfs f1, 8(r1) */ // 0x807C9010
    /* lfs f0, 0xc(r1) */ // 0x807C9014
    /* fmuls f1, f1, f1 */ // 0x807C9018
    /* lfs f2, 0x10(r1) */ // 0x807C901C
    /* fmuls f0, f0, f0 */ // 0x807C9020
}