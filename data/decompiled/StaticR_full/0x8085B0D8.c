/* Function at 0x8085B0D8, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8085B0D8(int r3, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x8085B0EC
    r30 = r3;
    r7 = *(0x90 + r3); // lwz @ 0x8085B0F4
    r8 = *(0x88 + r3); // lwz @ 0x8085B0F8
    /* slwi r0, r7, 2 */ // 0x8085B0FC
    /* lwzx r0, r8, r0 */ // 0x8085B100
    if (!=) goto 0x0x8085b160;
    r5 = *(0 + r5); // lwz @ 0x8085B10C
    /* mulli r0, r7, 0xc */ // 0x8085B110
    *(8 + r1) = r5; // stw @ 0x8085B114
    r7 = *(0x238 + r3); // lwz @ 0x8085B11C
    r12 = r7 + r0; // 0x8085B120
    FUN_805E3430(r5); // bl 0x805E3430
    r3 = *(0x90 + r30); // lwz @ 0x8085B12C
    r0 = *(0x8c + r30); // lwz @ 0x8085B130
    r3 = r3 + 1; // 0x8085B134
    *(0x90 + r30) = r3; // stw @ 0x8085B138
}