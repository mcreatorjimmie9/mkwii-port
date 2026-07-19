/* Function at 0x80870818, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80870818(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80870824
    r31 = r3;
    FUN_806497A4(); // bl 0x806497A4
    /* lis r4, 0 */ // 0x80870830
    r3 = r31;
    r4 = r4 + 0; // 0x80870838
    *(0 + r31) = r4; // stw @ 0x8087083C
    r31 = *(0xc + r1); // lwz @ 0x80870840
    r0 = *(0x14 + r1); // lwz @ 0x80870844
    return;
}