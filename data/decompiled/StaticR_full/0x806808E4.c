/* Function at 0x806808E4, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_806808E4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806808F0
    r31 = r3;
    FUN_806724EC(); // bl 0x806724EC
    /* lis r4, 0 */ // 0x806808FC
    r3 = r31 + 0x44; // 0x80680900
    r4 = r4 + 0; // 0x80680904
    *(0 + r31) = r4; // stw @ 0x80680908
    FUN_80670A7C(r4, r3, r4); // bl 0x80670A7C
    r3 = r31 + 0x1c8; // 0x80680910
    FUN_80670FA4(r3, r4, r3); // bl 0x80670FA4
    r3 = r31 + 0x33c; // 0x80680918
    FUN_8066D278(r3, r3); // bl 0x8066D278
    /* lis r4, 0 */ // 0x80680920
    /* li r0, 0 */ // 0x80680924
    r4 = r4 + 0; // 0x80680928
    *(0x4b0 + r31) = r0; // stw @ 0x8068092C
    r3 = r31;
    *(0 + r31) = r4; // stw @ 0x80680934
    r31 = *(0xc + r1); // lwz @ 0x80680938
    r0 = *(0x14 + r1); // lwz @ 0x8068093C
    return;
}