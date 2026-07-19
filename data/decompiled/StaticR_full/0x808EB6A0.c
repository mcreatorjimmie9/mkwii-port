/* Function at 0x808EB6A0, size=472 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808EB6A0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x808EB6B0
    *(8 + r1) = r30; // stw @ 0x808EB6B4
    /* li r30, 0 */ // 0x808EB6B8
    FUN_808CFA50(); // bl 0x808CFA50
    /* lis r4, 0 */ // 0x808EB6C0
    /* clrlwi. r3, r3, 0x18 */ // 0x808EB6C4
    r4 = *(0 + r4); // lwz @ 0x808EB6C8
    /* li r6, 0 */ // 0x808EB6CC
    r4 = r4 + 0xc18; // 0x808EB6D0
    /* mtctr r3 */ // 0x808EB6D4
    if (<=) goto 0x0x808eb710;
    /* clrlwi r0, r6, 0x18 */ // 0x808EB6DC
    /* mulli r0, r0, 0xf0 */ // 0x808EB6E0
    r5 = r4 + r0; // 0x808EB6E4
    r0 = *(0xcc + r5); // lwz @ 0x808EB6E8
    if (!=) goto 0x0x808eb6fc;
    r30 = r30 + 1; // 0x808EB6F4
    /* b 0x808eb708 */ // 0x808EB6F8
    if (!=) goto 0x0x808eb708;
    r31 = r31 + 1; // 0x808EB704
    r6 = r6 + 1; // 0x808EB708
    if (counter-- != 0) goto 0x0x808eb6dc;
    if (!=) goto 0x0x808eb774;
    /* subfic r0, r3, 0xc */ // 0x808EB718
    /* lis r6, 0 */ // 0x808EB71C
    /* mtctr r0 */ // 0x808EB720
    if (>=) goto 0x0x808eb860;
    /* clrlwi r4, r3, 0x18 */ // 0x808EB72C
    r0 = *(0 + r6); // lwz @ 0x808EB730
    /* mulli r5, r4, 0xf0 */ // 0x808EB734
    r5 = r0 + r5; // 0x808EB738
    r0 = *(0xc28 + r5); // lwz @ 0x808EB73C
    if (!=) goto 0x0x808eb768;
    /* srwi r4, r4, 0x1f */ // 0x808EB748
    /* clrlwi r0, r3, 0x1f */ // 0x808EB74C
    r0 = r0 ^ r4; // 0x808EB750
    /* subf r4, r4, r0 */ // 0x808EB754
    /* neg r0, r4 */ // 0x808EB758
    r0 = r0 | r4; // 0x808EB75C
    /* srwi r0, r0, 0x1f */ // 0x808EB760
    *(0xce4 + r5) = r0; // stw @ 0x808EB764
    r3 = r3 + 1; // 0x808EB768
    if (counter-- != 0) goto 0x0x808eb72c;
    /* b 0x808eb860 */ // 0x808EB770
    if (>=) goto 0x0x808eb7ec;
    /* subfic r0, r3, 0xc */ // 0x808EB778
    /* li r5, 0 */ // 0x808EB77C
    /* lis r7, 0 */ // 0x808EB780
    /* mtctr r0 */ // 0x808EB784
    if (>=) goto 0x0x808eb860;
    /* clrlwi r4, r3, 0x18 */ // 0x808EB790
    r0 = *(0 + r7); // lwz @ 0x808EB794
    /* mulli r6, r4, 0xf0 */ // 0x808EB798
    r6 = r0 + r6; // 0x808EB79C
    r0 = *(0xc28 + r6); // lwz @ 0x808EB7A0
    if (!=) goto 0x0x808eb7e0;
    if (>=) goto 0x0x808eb7c0;
    *(0xce4 + r6) = r5; // stw @ 0x808EB7B4
    r31 = r31 + 1; // 0x808EB7B8
    /* b 0x808eb7e0 */ // 0x808EB7BC
    /* srwi r4, r4, 0x1f */ // 0x808EB7C0
    /* clrlwi r0, r3, 0x1f */ // 0x808EB7C4
    r0 = r0 ^ r4; // 0x808EB7C8
    /* subf r4, r4, r0 */ // 0x808EB7CC
    /* neg r0, r4 */ // 0x808EB7D0
    r0 = r0 | r4; // 0x808EB7D4
    /* srwi r0, r0, 0x1f */ // 0x808EB7D8
    *(0xce4 + r6) = r0; // stw @ 0x808EB7DC
    r3 = r3 + 1; // 0x808EB7E0
    if (counter-- != 0) goto 0x0x808eb790;
    /* b 0x808eb860 */ // 0x808EB7E8
    if (<=) goto 0x0x808eb860;
    /* subfic r0, r3, 0xc */ // 0x808EB7F0
    /* li r5, 1 */ // 0x808EB7F4
    /* lis r7, 0 */ // 0x808EB7F8
    /* mtctr r0 */ // 0x808EB7FC
    if (>=) goto 0x0x808eb860;
    /* clrlwi r4, r3, 0x18 */ // 0x808EB808
    r0 = *(0 + r7); // lwz @ 0x808EB80C
    /* mulli r6, r4, 0xf0 */ // 0x808EB810
    r6 = r0 + r6; // 0x808EB814
    r0 = *(0xc28 + r6); // lwz @ 0x808EB818
    if (!=) goto 0x0x808eb858;
    if (<=) goto 0x0x808eb838;
    *(0xce4 + r6) = r5; // stw @ 0x808EB82C
    r30 = r30 + 1; // 0x808EB830
    /* b 0x808eb858 */ // 0x808EB834
    /* srwi r4, r4, 0x1f */ // 0x808EB838
    /* clrlwi r0, r3, 0x1f */ // 0x808EB83C
    r0 = r0 ^ r4; // 0x808EB840
    /* subf r4, r4, r0 */ // 0x808EB844
    /* neg r0, r4 */ // 0x808EB848
    r0 = r0 | r4; // 0x808EB84C
    /* srwi r0, r0, 0x1f */ // 0x808EB850
    *(0xce4 + r6) = r0; // stw @ 0x808EB854
    r3 = r3 + 1; // 0x808EB858
    if (counter-- != 0) goto 0x0x808eb808;
    r0 = *(0x14 + r1); // lwz @ 0x808EB860
    r31 = *(0xc + r1); // lwz @ 0x808EB864
    r30 = *(8 + r1); // lwz @ 0x808EB868
    return;
}