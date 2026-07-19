/* Function at 0x808C74F0, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808C74F0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x808C74F8
    *(0xc + r1) = r31; // stw @ 0x808C7500
    *(8 + r1) = r30; // stw @ 0x808C7504
    r30 = r6;
    r5 = *(0 + r3); // lwz @ 0x808C750C
    r0 = *(0x36 + r5); // lha @ 0x808C7510
    if (<) goto 0x0x808c7538;
    /* lis r3, 1 */ // 0x808C751C
    /* clrlwi r4, r0, 0x18 */ // 0x808C7520
    r0 = r3 + -0x6c10; // 0x808C7524
    r0 = r0 * r4; // 0x808C7528
    r3 = r5 + r0; // 0x808C752C
    r31 = r3 + 0x38; // 0x808C7530
    /* b 0x808c753c */ // 0x808C7534
    /* li r31, 0 */ // 0x808C7538
    FUN_808CFE7C(); // bl 0x808CFE7C
    /* addis r4, r31, 1 */ // 0x808C7540
    /* slwi r0, r3, 2 */ // 0x808C7544
    r3 = r4 + r0; // 0x808C7548
    *(-0x6e88 + r3) = r30; // stw @ 0x808C754C
    r31 = *(0xc + r1); // lwz @ 0x808C7550
    r30 = *(8 + r1); // lwz @ 0x808C7554
    r0 = *(0x14 + r1); // lwz @ 0x808C7558
    return;
}