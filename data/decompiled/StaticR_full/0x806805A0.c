/* Function at 0x806805A0, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_806805A0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806805AC
    r31 = r3;
    FUN_806724EC(); // bl 0x806724EC
    /* lis r4, 0 */ // 0x806805B8
    r3 = r31 + 0x44; // 0x806805BC
    r4 = r4 + 0; // 0x806805C0
    *(0 + r31) = r4; // stw @ 0x806805C4
    FUN_80670A7C(r4, r3, r4); // bl 0x80670A7C
    r3 = r31 + 0x1c8; // 0x806805CC
    FUN_80670FA4(r3, r4, r3); // bl 0x80670FA4
    r3 = r31 + 0x33c; // 0x806805D4
    FUN_8066D278(r3, r3); // bl 0x8066D278
    /* lis r4, 0 */ // 0x806805DC
    /* li r0, 0 */ // 0x806805E0
    r4 = r4 + 0; // 0x806805E4
    *(0x4b0 + r31) = r0; // stw @ 0x806805E8
    r3 = r31;
    *(0 + r31) = r4; // stw @ 0x806805F0
    r31 = *(0xc + r1); // lwz @ 0x806805F4
    r0 = *(0x14 + r1); // lwz @ 0x806805F8
    return;
}