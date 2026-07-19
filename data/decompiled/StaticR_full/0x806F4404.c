/* Function at 0x806F4404, size=152 bytes */
/* Stack frame: 272 bytes */
/* Saved registers: r22 */
/* Calls: 1 function(s) */

int FUN_806F4404(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -272(r1) */
    /* saved r22 */
    /* li r7, 0 */ // 0x806F440C
    *(0x114 + r1) = r0; // stw @ 0x806F4410
    /* stmw r22, 0xe8(r1) */ // 0x806F4420
    r24 = r3;
    r25 = r4;
    r26 = r5;
    /* li r4, 8 */ // 0x806F4444
    *(0x20 + r1) = r9; // stw @ 0x806F4448
    *(0x30 + r1) = r10; // stw @ 0x806F4450
    *(0x40 + r1) = r11; // stw @ 0x806F4458
    *(0x50 + r1) = r12; // stw @ 0x806F4460
    *(0x60 + r1) = r6; // stw @ 0x806F4468
    *(0x1c + r1) = r7; // stw @ 0x806F4470
    *(8 + r1) = r8; // stw @ 0x806F4474
    *(0x70 + r1) = r9; // stw @ 0x806F4478
    *(0x80 + r1) = r10; // stw @ 0x806F447C
    *(0x90 + r1) = r11; // stw @ 0x806F4480
    *(0xa0 + r1) = r12; // stw @ 0x806F4484
    *(0xb0 + r1) = r6; // stw @ 0x806F4488
    *(0xc0 + r1) = r0; // stw @ 0x806F448C
    *(0xd0 + r1) = r7; // stw @ 0x806F4490
    *(0xc + r1) = r8; // stw @ 0x806F4494
    FUN_805E3430(); // bl 0x805E3430
}