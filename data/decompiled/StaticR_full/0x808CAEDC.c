/* Function at 0x808CAEDC, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808CAEDC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808CAEE8
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r3, 0 */ // 0x808CAEF4
    /* li r4, 0 */ // 0x808CAEF8
    r3 = r3 + 0; // 0x808CAEFC
    /* li r0, -1 */ // 0x808CAF00
    *(0 + r31) = r3; // stw @ 0x808CAF04
    r3 = r31;
    *(0x174 + r31) = r4; // stb @ 0x808CAF0C
    *(0x178 + r31) = r0; // stw @ 0x808CAF10
    *(0x17c + r31) = r4; // stw @ 0x808CAF14
    r31 = *(0xc + r1); // lwz @ 0x808CAF18
    r0 = *(0x14 + r1); // lwz @ 0x808CAF1C
    return;
}