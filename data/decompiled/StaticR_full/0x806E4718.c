/* Function at 0x806E4718, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_806E4718(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x806E4724
    r28 = r3;
    /* li r29, 0 */ // 0x806E472C
    /* li r31, 1 */ // 0x806E4730
    /* lis r30, 0 */ // 0x806E4734
    r3 = *(0 + r30); // lwz @ 0x806E4738
    r0 = *(0x291c + r3); // lwz @ 0x806E473C
    /* mulli r0, r0, 0x58 */ // 0x806E4740
    r4 = r3 + r0; // 0x806E4744
    r0 = *(0x59 + r4); // lbz @ 0x806E4748
    if (==) goto 0x0x806e48cc;
    /* clrlwi r3, r29, 0x18 */ // 0x806E4754
    r0 = *(0x48 + r4); // lwz @ 0x806E4758
    r27 = r31 << r3; // slw
    /* and. r0, r27, r0 */ // 0x806E4760
    if (==) goto 0x0x806e48cc;
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0x69 + r3); // lbz @ 0x806E476C
    if (==) goto 0x0x806e4824;
    r6 = *(0 + r30); // lwz @ 0x806E4778
    r0 = *(0x291c + r6); // lwz @ 0x806E477C
    /* mulli r0, r0, 0x58 */ // 0x806E4780
    r7 = r6 + r0; // 0x806E4784
    r5 = *(0x48 + r7); // lwz @ 0x806E4788
    /* and. r0, r27, r5 */ // 0x806E478C
    if (==) goto 0x0x806e47dc;
    r0 = *(0x59 + r7); // lbz @ 0x806E4794
    /* clrlwi r3, r29, 0x18 */ // 0x806E4798
}