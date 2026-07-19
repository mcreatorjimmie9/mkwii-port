/* Function at 0x807098A4, size=248 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_807098A4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x807098AC
    *(0x14 + r1) = r29; // stw @ 0x807098BC
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x807098C4
    r28 = r3;
    r3 = *(0 + r5); // lwz @ 0x807098CC
    r3 = *(0 + r3); // lwz @ 0x807098D0
    r30 = *(0x304 + r3); // lwz @ 0x807098D4
    if (!=) goto 0x0x807098e8;
    /* li r30, 0 */ // 0x807098E0
    /* b 0x8070993c */ // 0x807098E4
    /* lis r31, 0 */ // 0x807098E8
    r31 = r31 + 0; // 0x807098EC
    if (==) goto 0x0x80709938;
    r12 = *(0 + r30); // lwz @ 0x807098F4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x807098FC
    /* mtctr r12 */ // 0x80709900
    /* bctrl  */ // 0x80709904
    /* b 0x80709920 */ // 0x80709908
    if (!=) goto 0x0x8070991c;
    /* li r0, 1 */ // 0x80709914
    /* b 0x8070992c */ // 0x80709918
    r3 = *(0 + r3); // lwz @ 0x8070991C
    if (!=) goto 0x0x8070990c;
    /* li r0, 0 */ // 0x80709928
    if (==) goto 0x0x80709938;
    /* b 0x8070993c */ // 0x80709934
    /* li r30, 0 */ // 0x80709938
    r5 = *(0x240 + r29); // lwz @ 0x8070993C
    /* lis r3, 0x6666 */ // 0x80709940
    r0 = r3 + 0x6667; // 0x80709944
    *(0x58 + r30) = r5; // stw @ 0x80709948
    /* mulhw r0, r0, r5 */ // 0x8070994C
    r3 = r29;
    r0 = r0 >> 1; // srawi
    /* srwi r4, r0, 0x1f */ // 0x80709958
    r0 = r0 + r4; // 0x8070995C
    /* mulli r0, r0, 5 */ // 0x80709960
    /* subf r0, r0, r5 */ // 0x80709964
    *(0x2908 + r28) = r0; // stw @ 0x80709968
    FUN_8064A384(); // bl 0x8064A384
    r3 = r28;
    /* li r4, 0 */ // 0x80709974
    FUN_80671C48(r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x8070997C
    r31 = *(0x1c + r1); // lwz @ 0x80709980
    r30 = *(0x18 + r1); // lwz @ 0x80709984
    r29 = *(0x14 + r1); // lwz @ 0x80709988
    r28 = *(0x10 + r1); // lwz @ 0x8070998C
    return;
}