/* Function at 0x806250B8, size=248 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_806250B8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x806250CC
    r29 = r3;
    FUN_8061DF18(); // bl 0x8061DF18
    r12 = *(0xc + r3); // lwz @ 0x806250D8
    r12 = *(0x1c + r12); // lwz @ 0x806250DC
    /* mtctr r12 */ // 0x806250E0
    /* bctrl  */ // 0x806250E4
    /* li r31, 0 */ // 0x806250E8
    /* b 0x80625110 */ // 0x806250EC
    r3 = r29;
    r4 = r31;
    FUN_8061DF30(r3, r4); // bl 0x8061DF30
    r12 = *(0xc + r3); // lwz @ 0x806250FC
    r12 = *(0x1c + r12); // lwz @ 0x80625100
    /* mtctr r12 */ // 0x80625104
    /* bctrl  */ // 0x80625108
    r31 = r31 + 1; // 0x8062510C
    r3 = r29;
    FUN_8061DB58(r3); // bl 0x8061DB58
    /* clrlwi r0, r3, 0x10 */ // 0x80625118
    if (<) goto 0x0x806250f0;
    /* li r31, 0 */ // 0x80625124
    /* b 0x80625174 */ // 0x80625128
    r3 = r29;
    r4 = r31;
    FUN_8061DF58(r3, r4); // bl 0x8061DF58
    r30 = r3;
    r3 = r29;
    FUN_8061DF18(r3, r4, r3); // bl 0x8061DF18
    r12 = *(0xc + r3); // lwz @ 0x80625144
    r4 = r30;
    r5 = r31;
    r12 = *(0x48 + r12); // lwz @ 0x80625150
    /* mtctr r12 */ // 0x80625154
    /* bctrl  */ // 0x80625158
    r12 = *(0xc + r30); // lwz @ 0x8062515C
    r3 = r30;
    r12 = *(0x1c + r12); // lwz @ 0x80625164
    /* mtctr r12 */ // 0x80625168
    /* bctrl  */ // 0x8062516C
    r31 = r31 + 1; // 0x80625170
    r3 = r29;
    FUN_8061DB68(r3); // bl 0x8061DB68
    /* clrlwi r0, r3, 0x10 */ // 0x8062517C
    if (<) goto 0x0x8062512c;
    r3 = r29;
    FUN_8061EE94(r3); // bl 0x8061EE94
    FUN_80644F14(r3); // bl 0x80644F14
    r0 = *(0x24 + r1); // lwz @ 0x80625194
    r31 = *(0x1c + r1); // lwz @ 0x80625198
    r30 = *(0x18 + r1); // lwz @ 0x8062519C
    r29 = *(0x14 + r1); // lwz @ 0x806251A0
    return;
}