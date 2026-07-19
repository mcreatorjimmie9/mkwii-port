/* Function at 0x80818818, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80818818(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8081882C
    /* li r30, 0 */ // 0x80818830
    *(0x14 + r1) = r29; // stw @ 0x80818834
    r29 = r4;
    r3 = *(0x10 + r31); // lwz @ 0x8081883C
    if (==) goto 0x0x80818850;
    r4 = r29;
    FUN_80853238(r4); // bl 0x80853238
    r30 = r30 + 1; // 0x80818850
    r31 = r31 + 4; // 0x80818854
    if (<) goto 0x0x8081883c;
    r0 = *(0x24 + r1); // lwz @ 0x80818860
    r31 = *(0x1c + r1); // lwz @ 0x80818864
    r30 = *(0x18 + r1); // lwz @ 0x80818868
    r29 = *(0x14 + r1); // lwz @ 0x8081886C
    return;
}