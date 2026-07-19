/* Function at 0x808C1830, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808C1830(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x808C1848
    r28 = r3;
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r30, r3, 0x18 */ // 0x808C1854
    /* li r29, 0 */ // 0x808C1858
    /* li r31, 0 */ // 0x808C185C
    /* b 0x808c18b0 */ // 0x808C1860
    r0 = *(0x10 + r28); // lwz @ 0x808C1864
    if (!=) goto 0x0x808c1884;
    r0 = *(0x3f74 + r28); // lwz @ 0x808C1870
    r4 = *(0x3ec + r28); // lwz @ 0x808C1874
    r3 = r0 + r31; // 0x808C1878
    FUN_806CAD54(); // bl 0x806CAD54
    /* b 0x808c18a8 */ // 0x808C1880
    r12 = *(0 + r28); // lwz @ 0x808C1884
    r3 = r28;
    r12 = *(0x10 + r12); // lwz @ 0x808C188C
    /* mtctr r12 */ // 0x808C1890
    /* bctrl  */ // 0x808C1894
    r0 = *(0x3f74 + r28); // lwz @ 0x808C1898
    r4 = r3;
    r3 = r0 + r31; // 0x808C18A0
    FUN_806CAD54(r4); // bl 0x806CAD54
    r31 = r31 + 0x184; // 0x808C18A8
    r29 = r29 + 1; // 0x808C18AC
    if (<) goto 0x0x808c1864;
    r0 = *(0x24 + r1); // lwz @ 0x808C18B8
    r31 = *(0x1c + r1); // lwz @ 0x808C18BC
    r30 = *(0x18 + r1); // lwz @ 0x808C18C0
    r29 = *(0x14 + r1); // lwz @ 0x808C18C4
    r28 = *(0x10 + r1); // lwz @ 0x808C18C8
    return;
}