/* Function at 0x80686414, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80686414(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* slwi r6, r4, 2 */ // 0x8068641C
    r4 = r5;
    *(0x14 + r1) = r0; // stw @ 0x80686424
    r6 = r3 + r6; // 0x80686428
    *(0xc + r1) = r31; // stw @ 0x8068642C
    r0 = *(0x37c + r3); // lwz @ 0x80686430
    r31 = *(8 + r6); // lwz @ 0x80686434
    /* slwi r0, r0, 2 */ // 0x80686438
    r5 = r3 + r0; // 0x8068643C
    *(0x354 + r5) = r31; // stw @ 0x80686440
    r5 = *(0x37c + r3); // lwz @ 0x80686444
    r0 = r5 + 1; // 0x80686448
    *(0x37c + r3) = r0; // stw @ 0x8068644C
    r3 = r31;
    FUN_80671C0C(r3); // bl 0x80671C0C
    r3 = r31;
    FUN_806712AC(r3, r3); // bl 0x806712AC
    r0 = *(0x14 + r1); // lwz @ 0x80686460
    r31 = *(0xc + r1); // lwz @ 0x80686464
    return;
}