/* Function at 0x8069F43C, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8069F43C(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x8069F44C
    *(0x18 + r1) = r30; // stw @ 0x8069F450
    /* li r30, 0 */ // 0x8069F454
    *(0x14 + r1) = r29; // stw @ 0x8069F458
    r29 = r3;
    /* b 0x8069f478 */ // 0x8069F460
    r0 = *(0 + r29); // lwz @ 0x8069F464
    r3 = r0 + r31; // 0x8069F468
    FUN_8069F864(); // bl 0x8069F864
    r31 = r31 + 0x44; // 0x8069F470
    r30 = r30 + 1; // 0x8069F474
    r0 = *(4 + r29); // lwz @ 0x8069F478
    if (<) goto 0x0x8069f464;
    r0 = *(0x24 + r1); // lwz @ 0x8069F484
    r31 = *(0x1c + r1); // lwz @ 0x8069F488
    r30 = *(0x18 + r1); // lwz @ 0x8069F48C
    r29 = *(0x14 + r1); // lwz @ 0x8069F490
    return;
}