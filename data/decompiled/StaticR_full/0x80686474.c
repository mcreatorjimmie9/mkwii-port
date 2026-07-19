/* Function at 0x80686474, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80686474(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80686480
    r31 = r3;
    r4 = *(0x37c + r3); // lwz @ 0x80686488
    r0 = r4 + -1; // 0x8068648C
    /* slwi r0, r0, 2 */ // 0x80686490
    r3 = r3 + r0; // 0x80686494
    r3 = *(0x354 + r3); // lwz @ 0x80686498
    FUN_806713C8(); // bl 0x806713C8
    r0 = *(0x37c + r31); // lwz @ 0x806864A0
    /* li r4, 0 */ // 0x806864A4
    /* slwi r0, r0, 2 */ // 0x806864A8
    r3 = r31 + r0; // 0x806864AC
    *(0x354 + r3) = r4; // stw @ 0x806864B0
    r3 = *(0x37c + r31); // lwz @ 0x806864B4
    r0 = r3 + -1; // 0x806864B8
    *(0x37c + r31) = r0; // stw @ 0x806864BC
    r31 = *(0xc + r1); // lwz @ 0x806864C0
    r0 = *(0x14 + r1); // lwz @ 0x806864C4
    return;
}