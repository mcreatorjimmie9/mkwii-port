/* Function at 0x808FAFCC, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_808FAFCC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x808FAFE4
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x808FAFEC
    r28 = r3;
    if (==) goto 0x0x808fb074;
    r0 = *(4 + r3); // lwz @ 0x808FAFF8
    if (==) goto 0x0x808fb040;
    r3 = *(8 + r3); // lwz @ 0x808FB004
    FUN_805E3430(); // bl 0x805E3430
    /* li r30, 0 */ // 0x808FB00C
    /* li r31, 0 */ // 0x808FB010
    /* b 0x808fb02c */ // 0x808FB014
    r3 = *(0x20 + r28); // lwz @ 0x808FB018
    /* lwzx r3, r3, r31 */ // 0x808FB01C
    FUN_805E3430(); // bl 0x805E3430
    r31 = r31 + 4; // 0x808FB024
    r30 = r30 + 1; // 0x808FB028
    r0 = *(4 + r28); // lwz @ 0x808FB02C
    if (<) goto 0x0x808fb018;
    r3 = *(0x20 + r28); // lwz @ 0x808FB038
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0xc + r28); // lwz @ 0x808FB040
    /* li r3, 0 */ // 0x808FB044
    *(4 + r28) = r3; // stw @ 0x808FB048
    if (==) goto 0x0x808fb05c;
    r3 = *(0x10 + r28); // lwz @ 0x808FB054
    FUN_805E3430(r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x808FB060
}