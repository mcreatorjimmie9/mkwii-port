/* Function at 0x805F53E8, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805F53E8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x805F53F0
    /* lis r4, 0 */ // 0x805F53F4
    *(0x14 + r1) = r0; // stw @ 0x805F53F8
    r5 = r5 + 0; // 0x805F53FC
    r4 = r4 + 0; // 0x805F5400
    *(0xc + r1) = r31; // stw @ 0x805F5404
    /* li r31, 0 */ // 0x805F5408
    *(8 + r1) = r30; // stw @ 0x805F540C
    /* lis r30, 0 */ // 0x805F5410
    r30 = r30 + 0; // 0x805F5414
    r3 = r30 + 0x38; // 0x805F5418
    *(0x38 + r30) = r5; // stw @ 0x805F541C
    r5 = r30 + 0x2c; // 0x805F5420
    *(4 + r3) = r31; // stw @ 0x805F5424
    *(8 + r3) = r31; // stw @ 0x805F5428
    FUN_8091EFA4(r3, r5); // bl 0x8091EFA4
    *(0x44 + r30) = r31; // stw @ 0x805F5430
    r31 = *(0xc + r1); // lwz @ 0x805F5434
    r30 = *(8 + r1); // lwz @ 0x805F5438
    r0 = *(0x14 + r1); // lwz @ 0x805F543C
    return;
}