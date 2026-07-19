/* Function at 0x8080C42C, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8080C42C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 3 */ // 0x8080C438
    *(0xc + r1) = r31; // stw @ 0x8080C43C
    r31 = r3;
    *(0xb0 + r3) = r0; // stw @ 0x8080C444
    r12 = *(0 + r3); // lwz @ 0x8080C448
    r12 = *(0x90 + r12); // lwz @ 0x8080C44C
    /* mtctr r12 */ // 0x8080C450
    /* bctrl  */ // 0x8080C454
    r12 = *(0 + r31); // lwz @ 0x8080C458
    r3 = r31;
    /* li r4, 0 */ // 0x8080C460
    r12 = *(0x68 + r12); // lwz @ 0x8080C464
    /* mtctr r12 */ // 0x8080C468
    /* bctrl  */ // 0x8080C46C
    /* li r0, 1 */ // 0x8080C470
    *(0x121 + r31) = r0; // stb @ 0x8080C474
    r31 = *(0xc + r1); // lwz @ 0x8080C478
    r0 = *(0x14 + r1); // lwz @ 0x8080C47C
    return;
}