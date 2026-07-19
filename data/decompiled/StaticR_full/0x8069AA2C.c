/* Function at 0x8069AA2C, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8069AA2C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x8069AA3C
    /* li r30, 0 */ // 0x8069AA44
    *(0x14 + r1) = r29; // stw @ 0x8069AA48
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8069AA50
    r28 = r3;
    /* b 0x8069aa78 */ // 0x8069AA58
    r0 = *(0x188 + r28); // lwz @ 0x8069AA5C
    r4 = r29;
    r3 = r0 + r31; // 0x8069AA64
    r3 = r3 + 0x174; // 0x8069AA68
    FUN_806692E0(r4, r3); // bl 0x806692E0
    r31 = r31 + 0x240; // 0x8069AA70
    r30 = r30 + 1; // 0x8069AA74
    r0 = *(0x17c + r28); // lwz @ 0x8069AA78
    if (<) goto 0x0x8069aa5c;
    *(0x178 + r28) = r29; // stw @ 0x8069AA84
    r31 = *(0x1c + r1); // lwz @ 0x8069AA88
    r30 = *(0x18 + r1); // lwz @ 0x8069AA8C
    r29 = *(0x14 + r1); // lwz @ 0x8069AA90
    r28 = *(0x10 + r1); // lwz @ 0x8069AA94
    r0 = *(0x24 + r1); // lwz @ 0x8069AA98
    return;
}