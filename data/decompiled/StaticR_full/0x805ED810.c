/* Function at 0x805ED810, size=228 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_805ED810(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805ED824
    r30 = r3;
    r0 = *(0x28 + r3); // lwz @ 0x805ED82C
    if (!=) goto 0x0x805ed8f8;
    r0 = *(4 + r3); // lwz @ 0x805ED838
    /* rlwinm. r0, r0, 0, 0x14, 0x14 */ // 0x805ED83C
    if (==) goto 0x0x805ed8a0;
    r0 = *(0x3c + r3); // lwz @ 0x805ED844
    /* li r3, 0 */ // 0x805ED848
    if (==) goto 0x0x805ed860;
    if (==) goto 0x0x805ed86c;
    /* b 0x805ed878 */ // 0x805ED85C
    /* lis r3, 0 */ // 0x805ED860
    r3 = *(0 + r3); // lwz @ 0x805ED864
    /* b 0x805ed878 */ // 0x805ED868
    /* lis r3, 0 */ // 0x805ED86C
    r3 = r3 + 0; // 0x805ED870
    r3 = *(4 + r3); // lwz @ 0x805ED874
    r4 = *(0x10 + r3); // lwz @ 0x805ED878
    /* li r3, 0x44 */ // 0x805ED87C
    /* li r5, 4 */ // 0x805ED880
    FUN_805E3430(r3, r3, r5); // bl 0x805E3430
    if (==) goto 0x0x805ed8f4;
    r4 = r30;
    /* li r5, 2 */ // 0x805ED894
    FUN_805E7A18(r4, r5); // bl 0x805E7A18
    /* b 0x805ed8f4 */ // 0x805ED89C
    r0 = *(0x3c + r3); // lwz @ 0x805ED8A0
    /* li r3, 0 */ // 0x805ED8A4
    if (==) goto 0x0x805ed8bc;
    if (==) goto 0x0x805ed8c8;
    /* b 0x805ed8d4 */ // 0x805ED8B8
    /* lis r3, 0 */ // 0x805ED8BC
    r3 = *(0 + r3); // lwz @ 0x805ED8C0
    /* b 0x805ed8d4 */ // 0x805ED8C4
    /* lis r3, 0 */ // 0x805ED8C8
    r3 = r3 + 0; // 0x805ED8CC
    r3 = *(4 + r3); // lwz @ 0x805ED8D0
    r4 = *(0x10 + r3); // lwz @ 0x805ED8D4
    /* li r3, 0x3c */ // 0x805ED8D8
    /* li r5, 4 */ // 0x805ED8DC
    FUN_805E3430(r3, r3, r5); // bl 0x805E3430
    if (==) goto 0x0x805ed8f4;
    r4 = r30;
    FUN_805E5470(r5, r4); // bl 0x805E5470
}