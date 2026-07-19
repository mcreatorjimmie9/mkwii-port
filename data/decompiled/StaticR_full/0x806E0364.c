/* Function at 0x806E0364, size=164 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_806E0364(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806E036C
    /* li r5, 0 */ // 0x806E0370
    *(0x44 + r1) = r0; // stw @ 0x806E0374
    *(0x3c + r1) = r31; // stw @ 0x806E0378
    r31 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x806E0380
    r12 = *(0x10 + r12); // lwz @ 0x806E0384
    /* mtctr r12 */ // 0x806E0388
    r3 = r3 + 0x44; // 0x806E038C
    /* bctrl  */ // 0x806E0390
    r3 = r31;
    r4 = r31 + 0x44; // 0x806E0398
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 1 */ // 0x806E03A4
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    r5 = r31 + 0x54; // 0x806E03B0
    /* li r4, 0 */ // 0x806E03B4
    /* li r6, 0 */ // 0x806E03B8
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r31 + 0x54; // 0x806E03C4
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    /* lis r4, 0 */ // 0x806E03CC
    r4 = r4 + 0; // 0x806E03D4
    /* li r7, 0 */ // 0x806E03D8
    r5 = r4 + 5; // 0x806E03DC
    r6 = r4 + 0xa; // 0x806E03E0
    FUN_8064E36C(r3, r4, r7, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806E03EC
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r0 = *(0x44 + r1); // lwz @ 0x806E03F4
    r31 = *(0x3c + r1); // lwz @ 0x806E03F8
    return;
}