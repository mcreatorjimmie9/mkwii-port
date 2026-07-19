/* Function at 0x808ABFA4, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_808ABFA4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x808ABFB0
    /* stmw r26, 8(r1) */ // 0x808ABFB4
    r26 = r3;
    r27 = r4;
    if (==) goto 0x0x808ac054;
    /* lis r4, 0 */ // 0x808ABFC4
    /* li r28, 0 */ // 0x808ABFC8
    r4 = r4 + 0; // 0x808ABFCC
    *(0 + r3) = r4; // stw @ 0x808ABFD0
    /* li r29, 0 */ // 0x808ABFD4
    /* li r30, 0 */ // 0x808ABFD8
    /* lis r31, 0 */ // 0x808ABFDC
    r3 = *(0 + r31); // lwz @ 0x808ABFE0
    if (==) goto 0x0x808ac018;
    /* lwzx r3, r3, r29 */ // 0x808ABFEC
    if (==) goto 0x0x808ac018;
    if (==) goto 0x0x808ac010;
    r12 = *(0 + r3); // lwz @ 0x808ABFFC
    /* li r4, 1 */ // 0x808AC000
    r12 = *(8 + r12); // lwz @ 0x808AC004
    /* mtctr r12 */ // 0x808AC008
    /* bctrl  */ // 0x808AC00C
    r3 = *(0 + r31); // lwz @ 0x808AC010
    /* stwx r30, r3, r29 */ // 0x808AC014
    r28 = r28 + 1; // 0x808AC018
    r29 = r29 + 4; // 0x808AC01C
    if (<) goto 0x0x808abfe0;
    /* lis r31, 0 */ // 0x808AC028
    r3 = *(0 + r31); // lwz @ 0x808AC02C
    if (==) goto 0x0x808ac044;
    FUN_805E3430(); // bl 0x805E3430
    /* li r0, 0 */ // 0x808AC03C
    *(0 + r31) = r0; // stw @ 0x808AC040
    if (<=) goto 0x0x808ac054;
    r3 = r26;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r26;
    r0 = *(0x24 + r1); // lwz @ 0x808AC05C
}