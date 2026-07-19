/* Function at 0x805ED710, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805ED710(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x805ED720
    r30 = r3;
    r0 = *(4 + r3); // lwz @ 0x805ED728
    /* rlwinm. r0, r0, 0, 0x14, 0x14 */ // 0x805ED72C
    if (==) goto 0x0x805ed794;
    r0 = *(0x3c + r3); // lwz @ 0x805ED734
    /* li r3, 0 */ // 0x805ED738
    if (==) goto 0x0x805ed750;
    if (==) goto 0x0x805ed75c;
    /* b 0x805ed768 */ // 0x805ED74C
    /* lis r3, 0 */ // 0x805ED750
    r3 = *(0 + r3); // lwz @ 0x805ED754
    /* b 0x805ed768 */ // 0x805ED758
    /* lis r3, 0 */ // 0x805ED75C
    r3 = r3 + 0; // 0x805ED760
    r3 = *(4 + r3); // lwz @ 0x805ED764
    r4 = *(0x10 + r3); // lwz @ 0x805ED768
    /* li r3, 0x44 */ // 0x805ED76C
    /* li r5, 4 */ // 0x805ED770
    FUN_805E3430(r3, r3, r5); // bl 0x805E3430
    if (==) goto 0x0x805ed78c;
    r4 = r30;
    /* li r5, 2 */ // 0x805ED784
    FUN_805E7A18(r4, r5); // bl 0x805E7A18
    r31 = r3;
    /* b 0x805ed7ec */ // 0x805ED790
    r0 = *(0x3c + r3); // lwz @ 0x805ED794
    /* li r3, 0 */ // 0x805ED798
    if (==) goto 0x0x805ed7b0;
    if (==) goto 0x0x805ed7bc;
    /* b 0x805ed7c8 */ // 0x805ED7AC
    /* lis r3, 0 */ // 0x805ED7B0
    r3 = *(0 + r3); // lwz @ 0x805ED7B4
    /* b 0x805ed7c8 */ // 0x805ED7B8
}