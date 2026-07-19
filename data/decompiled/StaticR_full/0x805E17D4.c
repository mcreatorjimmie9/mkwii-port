/* Function at 0x805E17D4, size=116 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r21 */
/* Calls: 1 function(s) */

int FUN_805E17D4(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r21 */
    /* lis r4, 0 */ // 0x805E17DC
    /* lis r5, 0 */ // 0x805E17E0
    *(0x44 + r1) = r0; // stw @ 0x805E17E4
    /* stmw r21, 0x14(r1) */ // 0x805E17E8
    /* li r25, 0 */ // 0x805E17EC
    r28 = *(0 + r4); // lhz @ 0x805E17F0
    /* lis r4, 0x1062 */ // 0x805E17F4
    r29 = *(0 + r5); // lhz @ 0x805E17F8
    r24 = r3;
    r23 = r28 * r25; // 0x805E1800
    r21 = r4 + 0x4dd3; // 0x805E1804
    /* li r27, 1 */ // 0x805E1808
    /* li r26, 8 */ // 0x805E180C
    /* lis r30, 0 */ // 0x805E1810
    /* li r31, 0 */ // 0x805E1814
    /* lis r22, -0x8000 */ // 0x805E1818
    /* b 0x805e18b0 */ // 0x805E181C
    r3 = r24;
    FUN_805E3430(r3); // bl 0x805E3430
    r0 = r3 + 0xf; // 0x805E1828
    if (>) goto 0x0x805e1878;
    r3 = r30 + 0; // 0x805E1834
    /* slwi r0, r0, 2 */ // 0x805E1838
    /* lwzx r3, r3, r0 */ // 0x805E183C
    /* mtctr r3 */ // 0x805E1840
    /* bctr  */ // 0x805E1844
}