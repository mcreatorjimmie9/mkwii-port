/* Function at 0x808C18D8, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808C18D8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x808C18F0
    r28 = r3;
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r30, r3, 0x18 */ // 0x808C18FC
    /* li r29, 0 */ // 0x808C1900
    /* li r31, 0 */ // 0x808C1904
    /* b 0x808c1958 */ // 0x808C1908
    r0 = *(0x10 + r28); // lwz @ 0x808C190C
    if (!=) goto 0x0x808c1940;
    r12 = *(0 + r28); // lwz @ 0x808C1918
    r3 = r28;
    r12 = *(0x10 + r12); // lwz @ 0x808C1920
    /* mtctr r12 */ // 0x808C1924
    /* bctrl  */ // 0x808C1928
    r0 = *(0x3f74 + r28); // lwz @ 0x808C192C
    r4 = r3;
    r3 = r0 + r31; // 0x808C1934
    FUN_806CAD54(r4); // bl 0x806CAD54
    /* b 0x808c1950 */ // 0x808C193C
    r0 = *(0x3f74 + r28); // lwz @ 0x808C1940
    r4 = *(0x3ec + r28); // lwz @ 0x808C1944
    r3 = r0 + r31; // 0x808C1948
    FUN_806CAD54(); // bl 0x806CAD54
    r31 = r31 + 0x184; // 0x808C1950
    r29 = r29 + 1; // 0x808C1954
    if (<) goto 0x0x808c190c;
    r0 = *(0x24 + r1); // lwz @ 0x808C1960
    r31 = *(0x1c + r1); // lwz @ 0x808C1964
    r30 = *(0x18 + r1); // lwz @ 0x808C1968
    r29 = *(0x14 + r1); // lwz @ 0x808C196C
    r28 = *(0x10 + r1); // lwz @ 0x808C1970
    return;
}