/* Function at 0x8078D7E4, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8078D7E4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8078D7F8
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8078D800
    r29 = r3;
    if (==) goto 0x0x8078d868;
    if (==) goto 0x0x8078d858;
    /* lis r5, 0 */ // 0x8078D810
    /* lis r4, 0 */ // 0x8078D814
    r5 = r5 + 0; // 0x8078D818
    *(0 + r3) = r5; // stw @ 0x8078D81C
    r31 = *(0 + r4); // lwz @ 0x8078D820
    if (==) goto 0x0x8078d84c;
    /* li r0, 0 */ // 0x8078D82C
    *(0 + r4) = r0; // stw @ 0x8078D830
    if (==) goto 0x0x8078d84c;
    r3 = r31;
    /* li r4, -1 */ // 0x8078D83C
    FUN_8078D448(r3, r4); // bl 0x8078D448
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x8078D850
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8078d868;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x8078D868
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x8078D870
    r29 = *(0x14 + r1); // lwz @ 0x8078D874
    r0 = *(0x24 + r1); // lwz @ 0x8078D878
    return;
}