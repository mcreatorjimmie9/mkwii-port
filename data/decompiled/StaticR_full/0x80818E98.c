/* Function at 0x80818E98, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80818E98(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x80818EA0
    *(0x14 + r1) = r0; // stw @ 0x80818EA4
    *(0xc + r1) = r31; // stw @ 0x80818EA8
    r31 = r3;
    FUN_80648D30(r5); // bl 0x80648D30
    /* lis r3, 0 */ // 0x80818EB4
    /* li r0, 2 */ // 0x80818EB8
    r3 = r3 + 0; // 0x80818EBC
    *(0 + r31) = r3; // stw @ 0x80818EC0
    r4 = r3 + 0x28; // 0x80818EC4
    *(0x4c + r31) = r4; // stw @ 0x80818EC8
    r3 = r31;
    *(0x74 + r31) = r0; // stw @ 0x80818ED0
    *(0x78 + r31) = r0; // stw @ 0x80818ED4
    *(0x7c + r31) = r0; // stw @ 0x80818ED8
    *(0x80 + r31) = r0; // stw @ 0x80818EDC
    r31 = *(0xc + r1); // lwz @ 0x80818EE0
    r0 = *(0x14 + r1); // lwz @ 0x80818EE4
    return;
}