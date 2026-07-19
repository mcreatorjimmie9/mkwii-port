/* Function at 0x805ED920, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805ED920(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805ED92C
    r31 = r3;
    r0 = *(4 + r3); // lwz @ 0x805ED934
    /* rlwinm. r0, r0, 0, 0x14, 0x14 */ // 0x805ED938
    if (==) goto 0x0x805ed99c;
    r0 = *(0x3c + r3); // lwz @ 0x805ED940
    /* li r3, 0 */ // 0x805ED944
    if (==) goto 0x0x805ed95c;
    if (==) goto 0x0x805ed968;
    /* b 0x805ed974 */ // 0x805ED958
    /* lis r3, 0 */ // 0x805ED95C
    r3 = *(0 + r3); // lwz @ 0x805ED960
    /* b 0x805ed974 */ // 0x805ED964
    /* lis r3, 0 */ // 0x805ED968
    r3 = r3 + 0; // 0x805ED96C
    r3 = *(4 + r3); // lwz @ 0x805ED970
    r4 = *(0x10 + r3); // lwz @ 0x805ED974
    /* li r3, 0x44 */ // 0x805ED978
    /* li r5, 4 */ // 0x805ED97C
    FUN_805E3430(r3, r3, r5); // bl 0x805E3430
    if (==) goto 0x0x805ed9f0;
    r4 = r31;
    /* li r5, 2 */ // 0x805ED990
    FUN_805E7A18(r4, r5); // bl 0x805E7A18
    /* b 0x805ed9f0 */ // 0x805ED998
    r0 = *(0x3c + r3); // lwz @ 0x805ED99C
    /* li r3, 0 */ // 0x805ED9A0
    if (==) goto 0x0x805ed9b8;
    if (==) goto 0x0x805ed9c4;
    /* b 0x805ed9d0 */ // 0x805ED9B4
    /* lis r3, 0 */ // 0x805ED9B8
    r3 = *(0 + r3); // lwz @ 0x805ED9BC
    /* b 0x805ed9d0 */ // 0x805ED9C0
    /* lis r3, 0 */ // 0x805ED9C4
}