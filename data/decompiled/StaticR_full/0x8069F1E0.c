/* Function at 0x8069F1E0, size=80 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_8069F1E0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x8069F1EC
    /* mulli r0, r4, 0x44 */ // 0x8069F1F0
    /* stmw r26, 8(r1) */ // 0x8069F1F4
    r26 = r3;
    r4 = *(0 + r3); // lwz @ 0x8069F1FC
    r27 = r4 + r0; // 0x8069F200
    if (==) goto 0x0x8069f2a8;
    r0 = *(0 + r5); // lbz @ 0x8069F208
    /* extsb. r0, r0 */ // 0x8069F20C
    if (==) goto 0x0x8069f2a8;
    r3 = *(0xc + r3); // lwz @ 0x8069F214
    r4 = r5;
    r3 = *(0x18 + r3); // lwz @ 0x8069F21C
    FUN_805E3430(r4); // bl 0x805E3430
    r31 = *(0x10 + r3); // lwz @ 0x8069F224
    r30 = r3 + 0x10; // 0x8069F228
    /* lis r28, 0 */ // 0x8069F22C
}