/* Function at 0x805DEB04, size=80 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805DEB04(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r5, 1 */ // 0x805DEB0C
    *(0x1c + r1) = r31; // stw @ 0x805DEB18
    /* lis r31, 0 */ // 0x805DEB1C
    r31 = r31 + 0; // 0x805DEB20
    *(0x18 + r1) = r30; // stw @ 0x805DEB24
    *(0x14 + r1) = r29; // stw @ 0x805DEB28
    *(0x10 + r1) = r28; // stw @ 0x805DEB2C
    r0 = *(0x6c + r31); // lwz @ 0x805DEB30
    r6 = *(0 + r3); // lwz @ 0x805DEB34
    /* lis r3, 0 */ // 0x805DEB38
    /* slwi r0, r0, 2 */ // 0x805DEB3C
    r28 = r6 + r0; // 0x805DEB40
    r29 = r6 + 8; // 0x805DEB44
    r3 = r3 + 0; // 0x805DEB48
    r28 = r28 + 8; // 0x805DEB4C
    FUN_805E3430(r3); // bl 0x805E3430
}