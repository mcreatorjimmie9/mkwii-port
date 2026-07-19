/* Function at 0x80825764, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_80825764(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x80825774
    /* li r30, 0 */ // 0x8082577C
    *(0x14 + r1) = r29; // stw @ 0x80825780
    *(0x10 + r1) = r28; // stw @ 0x80825784
    /* li r28, 0 */ // 0x80825788
    r29 = *(0 + r31); // lwz @ 0x8082578C
    r0 = *(0 + r31); // lwz @ 0x80825790
    r3 = r0 + r30; // 0x80825794
    r3 = r3 + 0x48; // 0x80825798
    FUN_80821ADC(r3); // bl 0x80821ADC
    r28 = r28 + 1; // 0x808257A0
    r30 = r30 + 0x24; // 0x808257A4
    if (<) goto 0x0x80825790;
    /* li r28, 0 */ // 0x808257B0
    /* lis r31, 0 */ // 0x808257B4
    /* b 0x808257dc */ // 0x808257B8
    /* clrlwi r0, r28, 0x18 */ // 0x808257BC
    r3 = *(0 + r31); // lwz @ 0x808257C0
    /* mulli r0, r0, 0x248 */ // 0x808257C4
    /* li r4, 1 */ // 0x808257C8
    r3 = *(0x14 + r3); // lwz @ 0x808257CC
    r3 = r3 + r0; // 0x808257D0
    FUN_808238DC(r4); // bl 0x808238DC
    r28 = r28 + 1; // 0x808257D8
    r0 = *(0x10 + r29); // lbz @ 0x808257DC
    /* clrlwi r3, r28, 0x18 */ // 0x808257E0
    if (<) goto 0x0x808257bc;
    r0 = *(0x24 + r1); // lwz @ 0x808257EC
    r31 = *(0x1c + r1); // lwz @ 0x808257F0
    r30 = *(0x18 + r1); // lwz @ 0x808257F4
    r29 = *(0x14 + r1); // lwz @ 0x808257F8
    r28 = *(0x10 + r1); // lwz @ 0x808257FC
    return;
}