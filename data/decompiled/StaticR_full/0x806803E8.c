/* Function at 0x806803E8, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_806803E8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0x1e */ // 0x806803F0
    /* li r5, -1 */ // 0x806803F4
    *(0x14 + r1) = r0; // stw @ 0x806803F8
    FUN_806724B8(r4, r5); // bl 0x806724B8
    /* lis r3, 0 */ // 0x80680400
    /* lis r5, 0 */ // 0x80680404
    /* lfs f1, 0(r5) */ // 0x80680408
    /* li r4, 5 */ // 0x8068040C
    r3 = *(0 + r3); // lwz @ 0x80680410
    /* li r5, 0x1e */ // 0x80680414
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    r0 = *(0x14 + r1); // lwz @ 0x8068041C
    return;
}