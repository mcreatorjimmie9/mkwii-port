/* Function at 0x80680DA4, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80680DA4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80680DB0
    r31 = r3;
    FUN_806724EC(); // bl 0x806724EC
    /* lis r4, 0 */ // 0x80680DBC
    r3 = r31 + 0x44; // 0x80680DC0
    r4 = r4 + 0; // 0x80680DC4
    *(0 + r31) = r4; // stw @ 0x80680DC8
    FUN_80670A7C(r4, r3, r4); // bl 0x80670A7C
    r3 = r31 + 0x1c8; // 0x80680DD0
    FUN_80670FA4(r3, r4, r3); // bl 0x80670FA4
    r3 = r31 + 0x33c; // 0x80680DD8
    FUN_8066D278(r3, r3); // bl 0x8066D278
    /* lis r4, 0 */ // 0x80680DE0
    /* li r0, 0 */ // 0x80680DE4
    r4 = r4 + 0; // 0x80680DE8
    *(0x4b0 + r31) = r0; // stw @ 0x80680DEC
    r3 = r31;
    *(0 + r31) = r4; // stw @ 0x80680DF4
    r31 = *(0xc + r1); // lwz @ 0x80680DF8
    r0 = *(0x14 + r1); // lwz @ 0x80680DFC
    return;
}