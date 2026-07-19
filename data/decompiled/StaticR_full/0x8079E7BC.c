/* Function at 0x8079E7BC, size=264 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 8 function(s) */

int FUN_8079E7BC(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* stmw r24, 0x10(r1) */ // 0x8079E7C8
    /* lis r30, 0 */ // 0x8079E7CC
    r31 = r3;
    /* li r29, 0 */ // 0x8079E7D4
    /* li r28, 0 */ // 0x8079E7D8
    /* li r27, 0 */ // 0x8079E7DC
    r5 = *(0 + r30); // lwz @ 0x8079E7E0
    r0 = *(0xb90 + r5); // lwz @ 0x8079E7E4
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x8079E7E8
    if (==) goto 0x0x8079e810;
    r3 = *(0x3f + r3); // lbz @ 0x8079E7F0
    /* li r29, 4 */ // 0x8079E7F4
    FUN_80818038(); // bl 0x80818038
    r30 = r3;
    if (!=) goto 0x0x8079e9b8;
    /* li r27, 1 */ // 0x8079E808
    /* b 0x8079e9b8 */ // 0x8079E80C
    r0 = *(0x44 + r3); // lwz @ 0x8079E810
    if (>) goto 0x0x8079e9b8;
    /* lis r4, 0 */ // 0x8079E81C
    /* slwi r0, r0, 2 */ // 0x8079E820
    r4 = r4 + 0; // 0x8079E824
    /* lwzx r4, r4, r0 */ // 0x8079E828
    /* mtctr r4 */ // 0x8079E82C
    /* bctr  */ // 0x8079E830
    r3 = *(0x3f + r3); // lbz @ 0x8079E834
    FUN_80818038(r4); // bl 0x80818038
    r30 = r3;
    /* li r29, 0 */ // 0x8079E840
    /* b 0x8079e9b8 */ // 0x8079E844
    r3 = *(0x3f + r3); // lbz @ 0x8079E848
    FUN_80818038(); // bl 0x80818038
    r30 = r3;
    /* li r29, 1 */ // 0x8079E854
    /* b 0x8079e9b8 */ // 0x8079E858
    r3 = r5;
    /* li r4, 0 */ // 0x8079E860
    FUN_805C14C8(r3, r4); // bl 0x805C14C8
    /* clrlwi r3, r3, 0x18 */ // 0x8079E868
    FUN_80818038(r3, r4); // bl 0x80818038
    r30 = r3;
    /* li r29, 2 */ // 0x8079E874
    /* b 0x8079e9b8 */ // 0x8079E878
    FUN_808CEBD8(); // bl 0x808CEBD8
    if (!=) goto 0x0x8079e890;
    /* li r28, 1 */ // 0x8079E888
    /* b 0x8079e974 */ // 0x8079E88C
    r0 = *(0x4c + r31); // lbz @ 0x8079E890
    if (<=) goto 0x0x8079e950;
    /* li r25, 0 */ // 0x8079E89C
    /* li r26, 0 */ // 0x8079E8A0
    /* li r29, 0 */ // 0x8079E8A4
    /* li r24, 0 */ // 0x8079E8A8
    /* b 0x8079e904 */ // 0x8079E8AC
    r3 = *(0 + r30); // lwz @ 0x8079E8B0
    /* clrlwi r4, r24, 0x18 */ // 0x8079E8B4
    FUN_805C14C8(); // bl 0x805C14C8
    /* clrlwi r3, r3, 0x18 */ // 0x8079E8BC
    FUN_80818038(); // bl 0x80818038
}