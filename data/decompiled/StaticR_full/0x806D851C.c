/* Function at 0x806D851C, size=5412 bytes */
/* Stack frame: 752 bytes */
/* Saved registers: r24 */
/* Calls: 41 function(s) */

int FUN_806D851C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -752(r1) */
    /* saved r24 */
    /* lis r4, 0 */ // 0x806D8524
    *(0x2f4 + r1) = r0; // stw @ 0x806D8528
    /* stmw r24, 0x2d0(r1) */ // 0x806D852C
    r25 = r3;
    r3 = *(0 + r4); // lwz @ 0x806D8534
    r3 = *(0 + r3); // lwz @ 0x806D8538
    r30 = *(0x2a4 + r3); // lwz @ 0x806D853C
    if (!=) goto 0x0x806d8550;
    /* li r30, 0 */ // 0x806D8548
    /* b 0x806d85a4 */ // 0x806D854C
    /* lis r26, 0 */ // 0x806D8550
    r26 = r26 + 0; // 0x806D8554
    if (==) goto 0x0x806d85a0;
    r12 = *(0 + r30); // lwz @ 0x806D855C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D8564
    /* mtctr r12 */ // 0x806D8568
    /* bctrl  */ // 0x806D856C
    /* b 0x806d8588 */ // 0x806D8570
    if (!=) goto 0x0x806d8584;
    /* li r0, 1 */ // 0x806D857C
    /* b 0x806d8594 */ // 0x806D8580
    r3 = *(0 + r3); // lwz @ 0x806D8584
    if (!=) goto 0x0x806d8574;
    /* li r0, 0 */ // 0x806D8590
    if (==) goto 0x0x806d85a0;
    /* b 0x806d85a4 */ // 0x806D859C
    /* li r30, 0 */ // 0x806D85A0
    r0 = *(0x94 + r30); // lwz @ 0x806D85A4
    if (==) goto 0x0x806d867c;
    /* li r0, 0 */ // 0x806D85B0
    *(0x2874 + r25) = r0; // stw @ 0x806D85B4
    /* lis r3, 0 */ // 0x806D85B8
    r3 = *(0 + r3); // lwz @ 0x806D85BC
    r3 = *(0 + r3); // lwz @ 0x806D85C0
    r27 = *(0x148 + r3); // lwz @ 0x806D85C4
    if (!=) goto 0x0x806d85d8;
    /* li r27, 0 */ // 0x806D85D0
    /* b 0x806d862c */ // 0x806D85D4
    /* lis r26, 0 */ // 0x806D85D8
    r26 = r26 + 0; // 0x806D85DC
    if (==) goto 0x0x806d8628;
    r12 = *(0 + r27); // lwz @ 0x806D85E4
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x806D85EC
    /* mtctr r12 */ // 0x806D85F0
    /* bctrl  */ // 0x806D85F4
    /* b 0x806d8610 */ // 0x806D85F8
    if (!=) goto 0x0x806d860c;
    /* li r0, 1 */ // 0x806D8604
    /* b 0x806d861c */ // 0x806D8608
    r3 = *(0 + r3); // lwz @ 0x806D860C
    if (!=) goto 0x0x806d85fc;
    /* li r0, 0 */ // 0x806D8618
    if (==) goto 0x0x806d8628;
    /* b 0x806d862c */ // 0x806D8624
    /* li r27, 0 */ // 0x806D8628
    r12 = *(0 + r27); // lwz @ 0x806D862C
    r3 = r27;
    r12 = *(0x64 + r12); // lwz @ 0x806D8634
    /* mtctr r12 */ // 0x806D8638
    /* bctrl  */ // 0x806D863C
    r12 = *(0 + r27); // lwz @ 0x806D8640
    r3 = r27;
    /* li r4, 0x157c */ // 0x806D8648
    /* li r5, 0 */ // 0x806D864C
    r12 = *(0x68 + r12); // lwz @ 0x806D8650
    /* mtctr r12 */ // 0x806D8654
    /* bctrl  */ // 0x806D8658
    r12 = *(0 + r25); // lwz @ 0x806D865C
    r3 = r25;
    /* li r4, 0x50 */ // 0x806D8664
    /* li r5, 0 */ // 0x806D8668
    r12 = *(0x24 + r12); // lwz @ 0x806D866C
    /* mtctr r12 */ // 0x806D8670
    /* bctrl  */ // 0x806D8674
    /* b 0x806d9a2c */ // 0x806D8678
    /* lis r31, 0 */ // 0x806D867C
    r3 = r30;
    r4 = *(0 + r31); // lwz @ 0x806D8684
    r4 = *(0x98 + r4); // lwz @ 0x806D8688
    r29 = *(0x3cc + r4); // lwz @ 0x806D868C
    r28 = *(0x3c8 + r4); // lwz @ 0x806D8690
    r24 = *(0x3c4 + r4); // lwz @ 0x806D8694
    r5 = r29;
    r6 = r28;
    r4 = r24;
    FUN_8065F900(r5, r6, r4); // bl 0x8065F900
    r27 = r3;
    if (!=) goto 0x0x806d8930;
    if (==) goto 0x0x806d8764;
    r3 = *(0 + r31); // lwz @ 0x806D86BC
    r3 = *(0 + r3); // lwz @ 0x806D86C0
    r28 = *(0x2bc + r3); // lwz @ 0x806D86C4
    if (!=) goto 0x0x806d86d8;
    /* li r28, 0 */ // 0x806D86D0
    /* b 0x806d872c */ // 0x806D86D4
    /* lis r26, 0 */ // 0x806D86D8
    r26 = r26 + 0; // 0x806D86DC
    if (==) goto 0x0x806d8728;
    r12 = *(0 + r28); // lwz @ 0x806D86E4
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x806D86EC
    /* mtctr r12 */ // 0x806D86F0
    /* bctrl  */ // 0x806D86F4
    /* b 0x806d8710 */ // 0x806D86F8
    if (!=) goto 0x0x806d870c;
    /* li r0, 1 */ // 0x806D8704
    /* b 0x806d871c */ // 0x806D8708
    r3 = *(0 + r3); // lwz @ 0x806D870C
    if (!=) goto 0x0x806d86fc;
    /* li r0, 0 */ // 0x806D8718
    if (==) goto 0x0x806d8728;
    /* b 0x806d872c */ // 0x806D8724
    /* li r28, 0 */ // 0x806D8728
    r3 = r28;
    r4 = r27;
    /* clrlwi r5, r29, 0x18 */ // 0x806D8734
    FUN_806D6C6C(r3, r4); // bl 0x806D6C6C
    r12 = *(0 + r25); // lwz @ 0x806D873C
    r3 = r25;
    /* li r4, 0xad */ // 0x806D8744
    /* li r5, 0 */ // 0x806D8748
    r12 = *(0x24 + r12); // lwz @ 0x806D874C
    /* mtctr r12 */ // 0x806D8750
    /* bctrl  */ // 0x806D8754
    /* li r0, 7 */ // 0x806D8758
    *(0x2874 + r25) = r0; // stw @ 0x806D875C
    /* b 0x806d9a2c */ // 0x806D8760
    /* lis r3, 0 */ // 0x806D8764
    r3 = *(0 + r3); // lwz @ 0x806D8768
    r0 = *(0x36 + r3); // lha @ 0x806D876C
    if (!=) goto 0x0x806d885c;
    r3 = *(0 + r31); // lwz @ 0x806D8778
    r3 = *(0 + r3); // lwz @ 0x806D877C
    r27 = *(0x150 + r3); // lwz @ 0x806D8780
    if (!=) goto 0x0x806d8794;
    /* li r27, 0 */ // 0x806D878C
    /* b 0x806d87e8 */ // 0x806D8790
    /* lis r26, 0 */ // 0x806D8794
    r26 = r26 + 0; // 0x806D8798
    if (==) goto 0x0x806d87e4;
    r12 = *(0 + r27); // lwz @ 0x806D87A0
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x806D87A8
    /* mtctr r12 */ // 0x806D87AC
    /* bctrl  */ // 0x806D87B0
    /* b 0x806d87cc */ // 0x806D87B4
    if (!=) goto 0x0x806d87c8;
    /* li r0, 1 */ // 0x806D87C0
    /* b 0x806d87d8 */ // 0x806D87C4
    r3 = *(0 + r3); // lwz @ 0x806D87C8
    if (!=) goto 0x0x806d87b8;
    /* li r0, 0 */ // 0x806D87D4
    if (==) goto 0x0x806d87e4;
    /* b 0x806d87e8 */ // 0x806D87E0
    /* li r27, 0 */ // 0x806D87E4
    r12 = *(0 + r27); // lwz @ 0x806D87E8
    r3 = r27;
    r12 = *(0x64 + r12); // lwz @ 0x806D87F0
    /* mtctr r12 */ // 0x806D87F4
    /* bctrl  */ // 0x806D87F8
    FUN_80654ECC(r3, r3); // bl 0x80654ECC
    r0 = r28 + 0x2490; // 0x806D8804
    *(0x224 + r1) = r0; // stw @ 0x806D8808
    r3 = r27;
    /* li r4, 0x17d4 */ // 0x806D8814
    FUN_8064D8BC(r3, r5, r4); // bl 0x8064D8BC
    r3 = r27;
    /* li r4, 0x177a */ // 0x806D8820
    /* li r5, 0 */ // 0x806D8824
    FUN_8064D8C4(r4, r3, r4, r5); // bl 0x8064D8C4
    r0 = r25 + 0x44; // 0x806D882C
    *(0x820 + r27) = r0; // stw @ 0x806D8830
    r3 = r25;
    /* li r4, 0x52 */ // 0x806D8838
    r12 = *(0 + r25); // lwz @ 0x806D883C
    /* li r5, 0 */ // 0x806D8840
    r12 = *(0x24 + r12); // lwz @ 0x806D8844
    /* mtctr r12 */ // 0x806D8848
    /* bctrl  */ // 0x806D884C
    /* li r0, 0xd */ // 0x806D8850
    *(0x2874 + r25) = r0; // stw @ 0x806D8854
    /* b 0x806d9a2c */ // 0x806D8858
    r3 = *(0 + r31); // lwz @ 0x806D885C
    r3 = *(0 + r3); // lwz @ 0x806D8860
    r27 = *(0x14c + r3); // lwz @ 0x806D8864
    if (!=) goto 0x0x806d8878;
    /* li r27, 0 */ // 0x806D8870
    /* b 0x806d88cc */ // 0x806D8874
    /* lis r26, 0 */ // 0x806D8878
    r26 = r26 + 0; // 0x806D887C
    if (==) goto 0x0x806d88c8;
    r12 = *(0 + r27); // lwz @ 0x806D8884
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x806D888C
    /* mtctr r12 */ // 0x806D8890
    /* bctrl  */ // 0x806D8894
    /* b 0x806d88b0 */ // 0x806D8898
    if (!=) goto 0x0x806d88ac;
    /* li r0, 1 */ // 0x806D88A4
    /* b 0x806d88bc */ // 0x806D88A8
    r3 = *(0 + r3); // lwz @ 0x806D88AC
    if (!=) goto 0x0x806d889c;
    /* li r0, 0 */ // 0x806D88B8
    if (==) goto 0x0x806d88c8;
    /* b 0x806d88cc */ // 0x806D88C4
    /* li r27, 0 */ // 0x806D88C8
    r12 = *(0 + r27); // lwz @ 0x806D88CC
    r3 = r27;
    r12 = *(0x64 + r12); // lwz @ 0x806D88D4
    /* mtctr r12 */ // 0x806D88D8
    /* bctrl  */ // 0x806D88DC
    FUN_80654ECC(r3, r3); // bl 0x80654ECC
    *(0x1a8 + r1) = r29; // stb @ 0x806D88E8
    r3 = r27;
    /* li r4, 0x17d5 */ // 0x806D88F4
    r12 = *(0 + r27); // lwz @ 0x806D88F8
    r12 = *(0x68 + r12); // lwz @ 0x806D88FC
    /* mtctr r12 */ // 0x806D8900
    /* bctrl  */ // 0x806D8904
    r12 = *(0 + r25); // lwz @ 0x806D8908
    r3 = r25;
    /* li r4, 0x51 */ // 0x806D8910
    /* li r5, 0 */ // 0x806D8914
    r12 = *(0x24 + r12); // lwz @ 0x806D8918
    /* mtctr r12 */ // 0x806D891C
    /* bctrl  */ // 0x806D8920
    /* li r0, 0xe */ // 0x806D8924
    *(0x2874 + r25) = r0; // stw @ 0x806D8928
    /* b 0x806d9a2c */ // 0x806D892C
    r0 = r24 + -2; // 0x806D8930
    if (>) goto 0x0x806d8dec;
    if (==) goto 0x0x806d8c20;
    r3 = *(0 + r31); // lwz @ 0x806D8944
    r3 = *(0x98 + r3); // lwz @ 0x806D8948
    r0 = *(0x3c4 + r3); // lwz @ 0x806D894C
    if (==) goto 0x0x806d8964;
    if (==) goto 0x0x806d896c;
    /* b 0x806d8970 */ // 0x806D8960
    /* li r26, 1 */ // 0x806D8964
    /* b 0x806d8970 */ // 0x806D8968
    /* li r26, 0 */ // 0x806D896C
    /* lis r3, 0 */ // 0x806D8970
    /* li r0, 0 */ // 0x806D8974
    r4 = *(0 + r3); // lwz @ 0x806D8978
    /* lis r3, 0 */ // 0x806D897C
    r3 = r3 + 0; // 0x806D8980
    *(8 + r1) = r3; // stw @ 0x806D8984
    r3 = r28;
    /* addis r28, r4, 2 */ // 0x806D898C
    *(0x12 + r1) = r0; // stb @ 0x806D8990
    *(0xc + r1) = r0; // sth @ 0x806D8994
    *(0xe + r1) = r0; // stb @ 0x806D8998
    *(0x10 + r1) = r0; // sth @ 0x806D899C
    FUN_805E0ED8(); // bl 0x805E0ED8
    /* extsh. r0, r3 */ // 0x806D89A4
    if (>=) goto 0x0x806d89b4;
    /* li r0, 0 */ // 0x806D89AC
    /* b 0x806d8a10 */ // 0x806D89B0
    /* clrlwi r0, r3, 0x10 */ // 0x806D89B4
    r3 = *(0x4ffc + r28); // lwz @ 0x806D89B8
    /* mulli r0, r0, 0xa0 */ // 0x806D89BC
    /* addis r3, r3, 2 */ // 0x806D89C0
    r3 = r3 + 0x3308; // 0x806D89C4
    r3 = r3 + r0; // 0x806D89C8
    /* mulli r0, r26, 0x50 */ // 0x806D89CC
    r3 = r3 + 0x2330; // 0x806D89D0
    /* lwzx r3, r3, r0 */ // 0x806D89D4
    /* srwi r0, r3, 0x1f */ // 0x806D89D8
    if (!=) goto 0x0x806d8a0c;
    r5 = r3 rlwinm 0x19; // rlwinm
    r4 = r3 rlwinm 0xf; // rlwinm
    r3 = r3 rlwinm 8; // rlwinm
    /* li r0, 1 */ // 0x806D89F0
    *(0x12 + r1) = r0; // stb @ 0x806D89F4
    /* li r0, 1 */ // 0x806D89F8
    *(0xc + r1) = r3; // sth @ 0x806D89FC
    *(0xe + r1) = r4; // stb @ 0x806D8A00
    *(0x10 + r1) = r5; // sth @ 0x806D8A04
    /* b 0x806d8a10 */ // 0x806D8A08
    /* li r0, 0 */ // 0x806D8A0C
    if (==) goto 0x0x806d8a9c;
    r0 = *(0x12 + r1); // lbz @ 0x806D8A18
    if (!=) goto 0x0x806d8a2c;
    /* li r0, 0 */ // 0x806D8A24
    /* b 0x806d8a94 */ // 0x806D8A28
    r0 = *(0xae + r27); // lbz @ 0x806D8A2C
    if (!=) goto 0x0x806d8a40;
    /* li r0, 1 */ // 0x806D8A38
    /* b 0x806d8a94 */ // 0x806D8A3C
    r0 = *(0xa8 + r27); // lhz @ 0x806D8A40
    r3 = *(0xc + r1); // lhz @ 0x806D8A44
    if (>=) goto 0x0x806d8a58;
    /* li r0, 1 */ // 0x806D8A50
    /* b 0x806d8a94 */ // 0x806D8A54
    if (!=) goto 0x0x806d8a90;
    r0 = *(0xaa + r27); // lbz @ 0x806D8A5C
    r3 = *(0xe + r1); // lbz @ 0x806D8A60
    if (>=) goto 0x0x806d8a74;
    /* li r0, 1 */ // 0x806D8A6C
    /* b 0x806d8a94 */ // 0x806D8A70
    if (!=) goto 0x0x806d8a90;
    r3 = *(0x10 + r1); // lhz @ 0x806D8A78
    r0 = *(0xac + r27); // lhz @ 0x806D8A7C
    if (>=) goto 0x0x806d8a90;
    /* li r0, 1 */ // 0x806D8A88
    /* b 0x806d8a94 */ // 0x806D8A8C
    /* li r0, 0 */ // 0x806D8A90
    if (==) goto 0x0x806d8b74;
    /* lis r3, 0 */ // 0x806D8A9C
    r3 = *(0 + r3); // lwz @ 0x806D8AA0
    r3 = *(0 + r3); // lwz @ 0x806D8AA4
    r27 = *(0x150 + r3); // lwz @ 0x806D8AA8
    if (!=) goto 0x0x806d8abc;
    /* li r27, 0 */ // 0x806D8AB4
    /* b 0x806d8b10 */ // 0x806D8AB8
    /* lis r26, 0 */ // 0x806D8ABC
    r26 = r26 + 0; // 0x806D8AC0
    if (==) goto 0x0x806d8b0c;
    r12 = *(0 + r27); // lwz @ 0x806D8AC8
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x806D8AD0
    /* mtctr r12 */ // 0x806D8AD4
    /* bctrl  */ // 0x806D8AD8
    /* b 0x806d8af4 */ // 0x806D8ADC
    if (!=) goto 0x0x806d8af0;
    /* li r0, 1 */ // 0x806D8AE8
    /* b 0x806d8b00 */ // 0x806D8AEC
    r3 = *(0 + r3); // lwz @ 0x806D8AF0
    if (!=) goto 0x0x806d8ae0;
    /* li r0, 0 */ // 0x806D8AFC
    if (==) goto 0x0x806d8b0c;
    /* b 0x806d8b10 */ // 0x806D8B08
    /* li r27, 0 */ // 0x806D8B0C
    r12 = *(0 + r27); // lwz @ 0x806D8B10
    r3 = r27;
    r12 = *(0x64 + r12); // lwz @ 0x806D8B18
    /* mtctr r12 */ // 0x806D8B1C
    /* bctrl  */ // 0x806D8B20
    r3 = r27;
    /* li r4, 0x17eb */ // 0x806D8B28
    /* li r5, 0 */ // 0x806D8B2C
    FUN_8064D8BC(r3, r4, r5); // bl 0x8064D8BC
    r3 = r27;
    /* li r4, 0x17e9 */ // 0x806D8B38
    /* li r5, 0 */ // 0x806D8B3C
    FUN_8064D8C4(r5, r3, r4, r5); // bl 0x8064D8C4
    /* li r0, 0 */ // 0x806D8B44
    *(0x820 + r27) = r0; // stw @ 0x806D8B48
    r3 = r25;
    /* li r4, 0x52 */ // 0x806D8B50
    r12 = *(0 + r25); // lwz @ 0x806D8B54
    /* li r5, 0 */ // 0x806D8B58
    r12 = *(0x24 + r12); // lwz @ 0x806D8B5C
    /* mtctr r12 */ // 0x806D8B60
    /* bctrl  */ // 0x806D8B64
    /* li r0, 1 */ // 0x806D8B68
    *(0x2874 + r25) = r0; // stw @ 0x806D8B6C
    /* b 0x806d9a2c */ // 0x806D8B70
    /* lis r3, 0 */ // 0x806D8B74
    r3 = *(0 + r3); // lwz @ 0x806D8B78
    r3 = *(0 + r3); // lwz @ 0x806D8B7C
    r28 = *(0x2bc + r3); // lwz @ 0x806D8B80
    if (!=) goto 0x0x806d8b94;
    /* li r28, 0 */ // 0x806D8B8C
    /* b 0x806d8be8 */ // 0x806D8B90
    /* lis r26, 0 */ // 0x806D8B94
    r26 = r26 + 0; // 0x806D8B98
    if (==) goto 0x0x806d8be4;
    r12 = *(0 + r28); // lwz @ 0x806D8BA0
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x806D8BA8
    /* mtctr r12 */ // 0x806D8BAC
    /* bctrl  */ // 0x806D8BB0
    /* b 0x806d8bcc */ // 0x806D8BB4
    if (!=) goto 0x0x806d8bc8;
    /* li r0, 1 */ // 0x806D8BC0
    /* b 0x806d8bd8 */ // 0x806D8BC4
    r3 = *(0 + r3); // lwz @ 0x806D8BC8
    if (!=) goto 0x0x806d8bb8;
    /* li r0, 0 */ // 0x806D8BD4
    if (==) goto 0x0x806d8be4;
    /* b 0x806d8be8 */ // 0x806D8BE0
    /* li r28, 0 */ // 0x806D8BE4
    r3 = r28;
    r4 = r27;
    /* clrlwi r5, r29, 0x18 */ // 0x806D8BF0
    FUN_806D6C6C(r3, r4); // bl 0x806D6C6C
    r12 = *(0 + r25); // lwz @ 0x806D8BF8
    r3 = r25;
    /* li r4, 0xad */ // 0x806D8C00
    /* li r5, 0 */ // 0x806D8C04
    r12 = *(0x24 + r12); // lwz @ 0x806D8C08
    /* mtctr r12 */ // 0x806D8C0C
    /* bctrl  */ // 0x806D8C10
    /* li r0, 7 */ // 0x806D8C14
    *(0x2874 + r25) = r0; // stw @ 0x806D8C18
    /* b 0x806d9a2c */ // 0x806D8C1C
    r3 = r30;
    FUN_8065FAE4(r3); // bl 0x8065FAE4
    if (==) goto 0x0x806d8cf8;
    r3 = *(0 + r31); // lwz @ 0x806D8C30
    r3 = *(0 + r3); // lwz @ 0x806D8C34
    r27 = *(0x14c + r3); // lwz @ 0x806D8C38
    if (!=) goto 0x0x806d8c4c;
    /* li r27, 0 */ // 0x806D8C44
    /* b 0x806d8ca0 */ // 0x806D8C48
    /* lis r26, 0 */ // 0x806D8C4C
    r26 = r26 + 0; // 0x806D8C50
    if (==) goto 0x0x806d8c9c;
    r12 = *(0 + r27); // lwz @ 0x806D8C58
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x806D8C60
    /* mtctr r12 */ // 0x806D8C64
    /* bctrl  */ // 0x806D8C68
    /* b 0x806d8c84 */ // 0x806D8C6C
    if (!=) goto 0x0x806d8c80;
    /* li r0, 1 */ // 0x806D8C78
    /* b 0x806d8c90 */ // 0x806D8C7C
    r3 = *(0 + r3); // lwz @ 0x806D8C80
    if (!=) goto 0x0x806d8c70;
    /* li r0, 0 */ // 0x806D8C8C
    if (==) goto 0x0x806d8c9c;
    /* b 0x806d8ca0 */ // 0x806D8C98
    /* li r27, 0 */ // 0x806D8C9C
    r12 = *(0 + r27); // lwz @ 0x806D8CA0
    r3 = r27;
    r12 = *(0x64 + r12); // lwz @ 0x806D8CA8
    /* mtctr r12 */ // 0x806D8CAC
    /* bctrl  */ // 0x806D8CB0
    r12 = *(0 + r27); // lwz @ 0x806D8CB4
    r3 = r27;
    /* li r4, 0x17df */ // 0x806D8CBC
    /* li r5, 0 */ // 0x806D8CC0
    r12 = *(0x68 + r12); // lwz @ 0x806D8CC4
    /* mtctr r12 */ // 0x806D8CC8
    /* bctrl  */ // 0x806D8CCC
    r12 = *(0 + r25); // lwz @ 0x806D8CD0
    r3 = r25;
    /* li r4, 0x51 */ // 0x806D8CD8
    /* li r5, 0 */ // 0x806D8CDC
    r12 = *(0x24 + r12); // lwz @ 0x806D8CE0
    /* mtctr r12 */ // 0x806D8CE4
    /* bctrl  */ // 0x806D8CE8
    /* li r0, 0xf */ // 0x806D8CEC
    *(0x2874 + r25) = r0; // stw @ 0x806D8CF0
    /* b 0x806d9a2c */ // 0x806D8CF4
    /* lis r3, 0 */ // 0x806D8CF8
    r3 = *(0 + r3); // lwz @ 0x806D8CFC
    FUN_806E69B4(r3); // bl 0x806E69B4
    if (==) goto 0x0x806d8d18;
    r3 = r25;
    FUN_806D9D54(r3); // bl 0x806D9D54
    /* b 0x806d9a2c */ // 0x806D8D14
    r3 = *(0 + r31); // lwz @ 0x806D8D18
    r3 = *(0 + r3); // lwz @ 0x806D8D1C
    r27 = *(0x150 + r3); // lwz @ 0x806D8D20
    if (!=) goto 0x0x806d8d34;
    /* li r27, 0 */ // 0x806D8D2C
    /* b 0x806d8d88 */ // 0x806D8D30
    /* lis r26, 0 */ // 0x806D8D34
    r26 = r26 + 0; // 0x806D8D38
    if (==) goto 0x0x806d8d84;
    r12 = *(0 + r27); // lwz @ 0x806D8D40
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x806D8D48
    /* mtctr r12 */ // 0x806D8D4C
    /* bctrl  */ // 0x806D8D50
    /* b 0x806d8d6c */ // 0x806D8D54
    if (!=) goto 0x0x806d8d68;
    /* li r0, 1 */ // 0x806D8D60
    /* b 0x806d8d78 */ // 0x806D8D64
    r3 = *(0 + r3); // lwz @ 0x806D8D68
    if (!=) goto 0x0x806d8d58;
    /* li r0, 0 */ // 0x806D8D74
    if (==) goto 0x0x806d8d84;
    /* b 0x806d8d88 */ // 0x806D8D80
    /* li r27, 0 */ // 0x806D8D84
    r12 = *(0 + r27); // lwz @ 0x806D8D88
    r3 = r27;
    r12 = *(0x64 + r12); // lwz @ 0x806D8D90
    /* mtctr r12 */ // 0x806D8D94
    /* bctrl  */ // 0x806D8D98
    r3 = r27;
    /* li r4, 0x17e8 */ // 0x806D8DA0
    /* li r5, 0 */ // 0x806D8DA4
    FUN_8064D8BC(r3, r4, r5); // bl 0x8064D8BC
    r3 = r27;
    /* li r4, 0x17e9 */ // 0x806D8DB0
    /* li r5, 0 */ // 0x806D8DB4
    FUN_8064D8C4(r5, r3, r4, r5); // bl 0x8064D8C4
    /* li r0, 0 */ // 0x806D8DBC
    *(0x820 + r27) = r0; // stw @ 0x806D8DC0
    r3 = r25;
    /* li r4, 0x52 */ // 0x806D8DC8
    r12 = *(0 + r25); // lwz @ 0x806D8DCC
    /* li r5, 0 */ // 0x806D8DD0
    r12 = *(0x24 + r12); // lwz @ 0x806D8DD4
    /* mtctr r12 */ // 0x806D8DD8
    /* bctrl  */ // 0x806D8DDC
    /* li r0, 2 */ // 0x806D8DE0
    *(0x2874 + r25) = r0; // stw @ 0x806D8DE4
    /* b 0x806d9a2c */ // 0x806D8DE8
    r0 = r24 + -7; // 0x806D8DEC
    if (>) goto 0x0x806d9140;
    if (==) goto 0x0x806d8ea8;
    r3 = *(0 + r31); // lwz @ 0x806D8E00
    r3 = *(0 + r3); // lwz @ 0x806D8E04
    r28 = *(0x2bc + r3); // lwz @ 0x806D8E08
    if (!=) goto 0x0x806d8e1c;
    /* li r28, 0 */ // 0x806D8E14
    /* b 0x806d8e70 */ // 0x806D8E18
    /* lis r26, 0 */ // 0x806D8E1C
    r26 = r26 + 0; // 0x806D8E20
    if (==) goto 0x0x806d8e6c;
    r12 = *(0 + r28); // lwz @ 0x806D8E28
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x806D8E30
    /* mtctr r12 */ // 0x806D8E34
    /* bctrl  */ // 0x806D8E38
    /* b 0x806d8e54 */ // 0x806D8E3C
    if (!=) goto 0x0x806d8e50;
    /* li r0, 1 */ // 0x806D8E48
    /* b 0x806d8e60 */ // 0x806D8E4C
    r3 = *(0 + r3); // lwz @ 0x806D8E50
    if (!=) goto 0x0x806d8e40;
    /* li r0, 0 */ // 0x806D8E5C
    if (==) goto 0x0x806d8e6c;
    /* b 0x806d8e70 */ // 0x806D8E68
    /* li r28, 0 */ // 0x806D8E6C
    r3 = r28;
    r4 = r27;
    /* clrlwi r5, r29, 0x18 */ // 0x806D8E78
    FUN_806D6C6C(r3, r4); // bl 0x806D6C6C
    r12 = *(0 + r25); // lwz @ 0x806D8E80
    r3 = r25;
    /* li r4, 0xad */ // 0x806D8E88
    /* li r5, 0 */ // 0x806D8E8C
    r12 = *(0x24 + r12); // lwz @ 0x806D8E90
    /* mtctr r12 */ // 0x806D8E94
    /* bctrl  */ // 0x806D8E98
    /* li r0, 7 */ // 0x806D8E9C
    *(0x2874 + r25) = r0; // stw @ 0x806D8EA0
    /* b 0x806d9a2c */ // 0x806D8EA4
    FUN_80654ECC(r3); // bl 0x80654ECC
    r0 = r28 + 0x2490; // 0x806D8EB0
    *(0x9c + r1) = r0; // stw @ 0x806D8EB4
    /* lis r5, 0 */ // 0x806D8EB8
    r3 = *(0 + r31); // lwz @ 0x806D8EBC
    r4 = *(0x2870 + r25); // lwz @ 0x806D8EC0
    /* li r0, 0 */ // 0x806D8EC4
    r5 = r5 + 0; // 0x806D8EC8
    *(0xc0 + r1) = r4; // stw @ 0x806D8ECC
    r4 = r24 + -7; // 0x806D8ED0
    *(0x60 + r1) = r5; // stw @ 0x806D8ED4
    *(0x64 + r1) = r0; // sth @ 0x806D8ED8
    *(0x66 + r1) = r0; // stb @ 0x806D8EDC
    *(0x68 + r1) = r0; // sth @ 0x806D8EE0
    *(0x6a + r1) = r0; // stb @ 0x806D8EE4
    r3 = *(0 + r3); // lwz @ 0x806D8EE8
    r3 = *(0x404 + r3); // lwz @ 0x806D8EEC
    FUN_80659814(); // bl 0x80659814
    r5 = r28;
    FUN_805A93AC(r5, r4); // bl 0x805A93AC
    r0 = *(0x6a + r1); // lbz @ 0x806D8F00
    if (==) goto 0x0x806d8f58;
    r3 = *(0x64 + r1); // lhz @ 0x806D8F0C
    /* li r0, 0x63 */ // 0x806D8F10
    if (>) goto 0x0x806d8f20;
    r0 = r3;
    /* clrlwi r0, r0, 0x18 */ // 0x806D8F24
    *(0x78 + r1) = r0; // stw @ 0x806D8F28
    if (<=) goto 0x0x806d8f38;
    /* li r0, 0x3b */ // 0x806D8F30
    /* b 0x806d8f3c */ // 0x806D8F34
    r0 = *(0x66 + r1); // lbz @ 0x806D8F38
    *(0x7c + r1) = r0; // stw @ 0x806D8F40
    if (<=) goto 0x0x806d8f50;
    /* li r0, 0x3e7 */ // 0x806D8F48
    /* b 0x806d8f54 */ // 0x806D8F4C
    r0 = *(0x68 + r1); // lhz @ 0x806D8F50
    *(0x80 + r1) = r0; // stw @ 0x806D8F54
    /* lis r4, 0 */ // 0x806D8F58
    r3 = r30;
    r5 = *(0 + r4); // lwz @ 0x806D8F60
    r6 = r28;
    /* li r4, 1 */ // 0x806D8F68
    r5 = *(0x36 + r5); // lha @ 0x806D8F6C
    FUN_8065F900(r3, r6, r4); // bl 0x8065F900
    if (==) goto 0x0x806d9064;
    /* lis r3, 0 */ // 0x806D8F7C
    r3 = *(0 + r3); // lwz @ 0x806D8F80
    r3 = *(0 + r3); // lwz @ 0x806D8F84
    r27 = *(0x150 + r3); // lwz @ 0x806D8F88
    if (!=) goto 0x0x806d8f9c;
    /* li r27, 0 */ // 0x806D8F94
    /* b 0x806d8ff0 */ // 0x806D8F98
    /* lis r26, 0 */ // 0x806D8F9C
    r26 = r26 + 0; // 0x806D8FA0
    if (==) goto 0x0x806d8fec;
    r12 = *(0 + r27); // lwz @ 0x806D8FA8
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x806D8FB0
    /* mtctr r12 */ // 0x806D8FB4
    /* bctrl  */ // 0x806D8FB8
    /* b 0x806d8fd4 */ // 0x806D8FBC
    if (!=) goto 0x0x806d8fd0;
    /* li r0, 1 */ // 0x806D8FC8
    /* b 0x806d8fe0 */ // 0x806D8FCC
    r3 = *(0 + r3); // lwz @ 0x806D8FD0
    if (!=) goto 0x0x806d8fc0;
    /* li r0, 0 */ // 0x806D8FDC
    if (==) goto 0x0x806d8fec;
    /* b 0x806d8ff0 */ // 0x806D8FE8
    /* li r27, 0 */ // 0x806D8FEC
    r12 = *(0 + r27); // lwz @ 0x806D8FF0
    r3 = r27;
    r12 = *(0x64 + r12); // lwz @ 0x806D8FF8
    /* mtctr r12 */ // 0x806D8FFC
    /* bctrl  */ // 0x806D9000
    r4 = *(0x6a + r1); // lbz @ 0x806D9004
    r3 = r27;
    /* neg r0, r4 */ // 0x806D9010
    r0 = r0 | r4; // 0x806D9014
    /* srwi r4, r0, 0x1f */ // 0x806D9018
    r4 = r4 + 0x189f; // 0x806D901C
    FUN_8064D8BC(r5, r4); // bl 0x8064D8BC
    r3 = r27;
    /* li r4, 0x189c */ // 0x806D9028
    /* li r5, 0 */ // 0x806D902C
    FUN_8064D8C4(r4, r3, r4, r5); // bl 0x8064D8C4
    /* li r0, 0 */ // 0x806D9034
    *(0x820 + r27) = r0; // stw @ 0x806D9038
    r3 = r25;
    /* li r4, 0x52 */ // 0x806D9040
    r12 = *(0 + r25); // lwz @ 0x806D9044
    /* li r5, 0 */ // 0x806D9048
    r12 = *(0x24 + r12); // lwz @ 0x806D904C
    /* mtctr r12 */ // 0x806D9050
    /* bctrl  */ // 0x806D9054
    /* li r0, 8 */ // 0x806D9058
    *(0x2874 + r25) = r0; // stw @ 0x806D905C
    /* b 0x806d9a2c */ // 0x806D9060
    /* lis r3, 0 */ // 0x806D9064
    r3 = *(0 + r3); // lwz @ 0x806D9068
    r3 = *(0 + r3); // lwz @ 0x806D906C
    r27 = *(0x14c + r3); // lwz @ 0x806D9070
    if (!=) goto 0x0x806d9084;
    /* li r27, 0 */ // 0x806D907C
    /* b 0x806d90d8 */ // 0x806D9080
    /* lis r26, 0 */ // 0x806D9084
    r26 = r26 + 0; // 0x806D9088
    if (==) goto 0x0x806d90d4;
    r12 = *(0 + r27); // lwz @ 0x806D9090
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x806D9098
    /* mtctr r12 */ // 0x806D909C
    /* bctrl  */ // 0x806D90A0
    /* b 0x806d90bc */ // 0x806D90A4
    if (!=) goto 0x0x806d90b8;
    /* li r0, 1 */ // 0x806D90B0
    /* b 0x806d90c8 */ // 0x806D90B4
    r3 = *(0 + r3); // lwz @ 0x806D90B8
    if (!=) goto 0x0x806d90a8;
    /* li r0, 0 */ // 0x806D90C4
    if (==) goto 0x0x806d90d4;
    /* b 0x806d90d8 */ // 0x806D90D0
    /* li r27, 0 */ // 0x806D90D4
    r12 = *(0 + r27); // lwz @ 0x806D90D8
    r3 = r27;
    r12 = *(0x64 + r12); // lwz @ 0x806D90E0
    /* mtctr r12 */ // 0x806D90E4
    /* bctrl  */ // 0x806D90E8
    r4 = *(0x6a + r1); // lbz @ 0x806D90EC
    r3 = r27;
    r12 = *(0 + r27); // lwz @ 0x806D90F4
    /* neg r0, r4 */ // 0x806D90FC
    r0 = r0 | r4; // 0x806D9100
    r12 = *(0x68 + r12); // lwz @ 0x806D9104
    /* srwi r4, r0, 0x1f */ // 0x806D9108
    r4 = r4 + 0x189d; // 0x806D910C
    /* mtctr r12 */ // 0x806D9110
    /* bctrl  */ // 0x806D9114
    r12 = *(0 + r25); // lwz @ 0x806D9118
    r3 = r25;
    /* li r4, 0x51 */ // 0x806D9120
    /* li r5, 0 */ // 0x806D9124
    r12 = *(0x24 + r12); // lwz @ 0x806D9128
    /* mtctr r12 */ // 0x806D912C
    /* bctrl  */ // 0x806D9130
    /* li r0, 0xe */ // 0x806D9134
    *(0x2874 + r25) = r0; // stw @ 0x806D9138
    /* b 0x806d9a2c */ // 0x806D913C
    if (!=) goto 0x0x806d9564;
    if (==) goto 0x0x806d9398;
    /* lis r3, 0 */ // 0x806D9150
    r5 = *(0 + r3); // lwz @ 0x806D9154
    r0 = *(0x36 + r5); // lha @ 0x806D9158
    if (<) goto 0x0x806d9180;
    /* lis r3, 1 */ // 0x806D9164
    /* clrlwi r4, r0, 0x18 */ // 0x806D9168
    r0 = r3 + -0x6c10; // 0x806D916C
    r0 = r0 * r4; // 0x806D9170
    r3 = r5 + r0; // 0x806D9174
    r3 = r3 + 0x38; // 0x806D9178
    /* b 0x806d9184 */ // 0x806D917C
    /* li r3, 0 */ // 0x806D9180
    r5 = r28;
    /* li r4, 0 */ // 0x806D9188
    FUN_805D7994(r3, r3, r5, r4); // bl 0x805D7994
    r0 = *(0x56 + r3); // lbz @ 0x806D9190
    if (!=) goto 0x0x806d91a4;
    /* li r0, 0 */ // 0x806D919C
    /* b 0x806d920c */ // 0x806D91A0
    r0 = *(0xae + r27); // lbz @ 0x806D91A4
    if (!=) goto 0x0x806d91b8;
    /* li r0, 1 */ // 0x806D91B0
    /* b 0x806d920c */ // 0x806D91B4
    r0 = *(0xa8 + r27); // lhz @ 0x806D91B8
    r4 = *(0x50 + r3); // lhz @ 0x806D91BC
    if (>=) goto 0x0x806d91d0;
    /* li r0, 1 */ // 0x806D91C8
    /* b 0x806d920c */ // 0x806D91CC
    if (!=) goto 0x0x806d9208;
    r0 = *(0xaa + r27); // lbz @ 0x806D91D4
    r4 = *(0x52 + r3); // lbz @ 0x806D91D8
    if (>=) goto 0x0x806d91ec;
    /* li r0, 1 */ // 0x806D91E4
    /* b 0x806d920c */ // 0x806D91E8
    if (!=) goto 0x0x806d9208;
    r3 = *(0x54 + r3); // lhz @ 0x806D91F0
    r0 = *(0xac + r27); // lhz @ 0x806D91F4
    if (>) goto 0x0x806d9208;
    /* li r0, 1 */ // 0x806D9200
    /* b 0x806d920c */ // 0x806D9204
    /* li r0, 0 */ // 0x806D9208
    if (==) goto 0x0x806d92ec;
    /* lis r3, 0 */ // 0x806D9214
    r3 = *(0 + r3); // lwz @ 0x806D9218
    r3 = *(0 + r3); // lwz @ 0x806D921C
    r27 = *(0x150 + r3); // lwz @ 0x806D9220
    if (!=) goto 0x0x806d9234;
    /* li r27, 0 */ // 0x806D922C
    /* b 0x806d9288 */ // 0x806D9230
    /* lis r26, 0 */ // 0x806D9234
    r26 = r26 + 0; // 0x806D9238
    if (==) goto 0x0x806d9284;
    r12 = *(0 + r27); // lwz @ 0x806D9240
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x806D9248
    /* mtctr r12 */ // 0x806D924C
    /* bctrl  */ // 0x806D9250
    /* b 0x806d926c */ // 0x806D9254
    if (!=) goto 0x0x806d9268;
    /* li r0, 1 */ // 0x806D9260
    /* b 0x806d9278 */ // 0x806D9264
    r3 = *(0 + r3); // lwz @ 0x806D9268
    if (!=) goto 0x0x806d9258;
    /* li r0, 0 */ // 0x806D9274
    if (==) goto 0x0x806d9284;
    /* b 0x806d9288 */ // 0x806D9280
    /* li r27, 0 */ // 0x806D9284
    r12 = *(0 + r27); // lwz @ 0x806D9288
    r3 = r27;
    r12 = *(0x64 + r12); // lwz @ 0x806D9290
    /* mtctr r12 */ // 0x806D9294
    /* bctrl  */ // 0x806D9298
    r3 = r27;
    /* li r4, 0x17eb */ // 0x806D92A0
    /* li r5, 0 */ // 0x806D92A4
    FUN_8064D8BC(r3, r4, r5); // bl 0x8064D8BC
    r3 = r27;
    /* li r4, 0x17e9 */ // 0x806D92B0
    /* li r5, 0 */ // 0x806D92B4
    FUN_8064D8C4(r5, r3, r4, r5); // bl 0x8064D8C4
    /* li r0, 0 */ // 0x806D92BC
    *(0x820 + r27) = r0; // stw @ 0x806D92C0
    r3 = r25;
    /* li r4, 0x52 */ // 0x806D92C8
    r12 = *(0 + r25); // lwz @ 0x806D92CC
    /* li r5, 0 */ // 0x806D92D0
    r12 = *(0x24 + r12); // lwz @ 0x806D92D4
    /* mtctr r12 */ // 0x806D92D8
    /* bctrl  */ // 0x806D92DC
    /* li r0, 1 */ // 0x806D92E0
    *(0x2874 + r25) = r0; // stw @ 0x806D92E4
    /* b 0x806d9a2c */ // 0x806D92E8
    /* lis r3, 0 */ // 0x806D92EC
    r3 = *(0 + r3); // lwz @ 0x806D92F0
    r3 = *(0 + r3); // lwz @ 0x806D92F4
    r28 = *(0x2bc + r3); // lwz @ 0x806D92F8
    if (!=) goto 0x0x806d930c;
    /* li r28, 0 */ // 0x806D9304
    /* b 0x806d9360 */ // 0x806D9308
    /* lis r26, 0 */ // 0x806D930C
    r26 = r26 + 0; // 0x806D9310
    if (==) goto 0x0x806d935c;
    r12 = *(0 + r28); // lwz @ 0x806D9318
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x806D9320
    /* mtctr r12 */ // 0x806D9324
    /* bctrl  */ // 0x806D9328
    /* b 0x806d9344 */ // 0x806D932C
    if (!=) goto 0x0x806d9340;
    /* li r0, 1 */ // 0x806D9338
    /* b 0x806d9350 */ // 0x806D933C
    r3 = *(0 + r3); // lwz @ 0x806D9340
    if (!=) goto 0x0x806d9330;
    /* li r0, 0 */ // 0x806D934C
    if (==) goto 0x0x806d935c;
    /* b 0x806d9360 */ // 0x806D9358
    /* li r28, 0 */ // 0x806D935C
    r3 = r28;
    r4 = r27;
    /* clrlwi r5, r29, 0x18 */ // 0x806D9368
    FUN_806D6C6C(r3, r4); // bl 0x806D6C6C
    r12 = *(0 + r25); // lwz @ 0x806D9370
    r3 = r25;
    /* li r4, 0xad */ // 0x806D9378
    /* li r5, 0 */ // 0x806D937C
    r12 = *(0x24 + r12); // lwz @ 0x806D9380
    /* mtctr r12 */ // 0x806D9384
    /* bctrl  */ // 0x806D9388
    /* li r0, 7 */ // 0x806D938C
    *(0x2874 + r25) = r0; // stw @ 0x806D9390
    /* b 0x806d9a2c */ // 0x806D9394
    r3 = r30;
    FUN_8065FAE4(r3); // bl 0x8065FAE4
    if (==) goto 0x0x806d9470;
    r3 = *(0 + r31); // lwz @ 0x806D93A8
    r3 = *(0 + r3); // lwz @ 0x806D93AC
    r27 = *(0x14c + r3); // lwz @ 0x806D93B0
    if (!=) goto 0x0x806d93c4;
    /* li r27, 0 */ // 0x806D93BC
    /* b 0x806d9418 */ // 0x806D93C0
    /* lis r26, 0 */ // 0x806D93C4
    r26 = r26 + 0; // 0x806D93C8
    if (==) goto 0x0x806d9414;
    r12 = *(0 + r27); // lwz @ 0x806D93D0
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x806D93D8
    /* mtctr r12 */ // 0x806D93DC
    /* bctrl  */ // 0x806D93E0
    /* b 0x806d93fc */ // 0x806D93E4
    if (!=) goto 0x0x806d93f8;
    /* li r0, 1 */ // 0x806D93F0
    /* b 0x806d9408 */ // 0x806D93F4
    r3 = *(0 + r3); // lwz @ 0x806D93F8
    if (!=) goto 0x0x806d93e8;
    /* li r0, 0 */ // 0x806D9404
    if (==) goto 0x0x806d9414;
    /* b 0x806d9418 */ // 0x806D9410
    /* li r27, 0 */ // 0x806D9414
    r12 = *(0 + r27); // lwz @ 0x806D9418
    r3 = r27;
    r12 = *(0x64 + r12); // lwz @ 0x806D9420
    /* mtctr r12 */ // 0x806D9424
    /* bctrl  */ // 0x806D9428
    r12 = *(0 + r27); // lwz @ 0x806D942C
    r3 = r27;
    /* li r4, 0x17df */ // 0x806D9434
    /* li r5, 0 */ // 0x806D9438
    r12 = *(0x68 + r12); // lwz @ 0x806D943C
    /* mtctr r12 */ // 0x806D9440
    /* bctrl  */ // 0x806D9444
    r12 = *(0 + r25); // lwz @ 0x806D9448
    r3 = r25;
    /* li r4, 0x51 */ // 0x806D9450
    /* li r5, 0 */ // 0x806D9454
    r12 = *(0x24 + r12); // lwz @ 0x806D9458
    /* mtctr r12 */ // 0x806D945C
    /* bctrl  */ // 0x806D9460
    /* li r0, 0xf */ // 0x806D9464
    *(0x2874 + r25) = r0; // stw @ 0x806D9468
    /* b 0x806d9a2c */ // 0x806D946C
    /* lis r3, 0 */ // 0x806D9470
    r3 = *(0 + r3); // lwz @ 0x806D9474
    FUN_806E69B4(r3); // bl 0x806E69B4
    if (==) goto 0x0x806d9490;
    r3 = r25;
    FUN_806D9D54(r3); // bl 0x806D9D54
    /* b 0x806d9a2c */ // 0x806D948C
    r3 = *(0 + r31); // lwz @ 0x806D9490
    r3 = *(0 + r3); // lwz @ 0x806D9494
    r27 = *(0x150 + r3); // lwz @ 0x806D9498
    if (!=) goto 0x0x806d94ac;
    /* li r27, 0 */ // 0x806D94A4
    /* b 0x806d9500 */ // 0x806D94A8
    /* lis r26, 0 */ // 0x806D94AC
    r26 = r26 + 0; // 0x806D94B0
    if (==) goto 0x0x806d94fc;
    r12 = *(0 + r27); // lwz @ 0x806D94B8
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x806D94C0
    /* mtctr r12 */ // 0x806D94C4
    /* bctrl  */ // 0x806D94C8
    /* b 0x806d94e4 */ // 0x806D94CC
    if (!=) goto 0x0x806d94e0;
    /* li r0, 1 */ // 0x806D94D8
    /* b 0x806d94f0 */ // 0x806D94DC
    r3 = *(0 + r3); // lwz @ 0x806D94E0
    if (!=) goto 0x0x806d94d0;
    /* li r0, 0 */ // 0x806D94EC
    if (==) goto 0x0x806d94fc;
    /* b 0x806d9500 */ // 0x806D94F8
    /* li r27, 0 */ // 0x806D94FC
    r12 = *(0 + r27); // lwz @ 0x806D9500
    r3 = r27;
    r12 = *(0x64 + r12); // lwz @ 0x806D9508
    /* mtctr r12 */ // 0x806D950C
    /* bctrl  */ // 0x806D9510
    r3 = r27;
    /* li r4, 0x17e8 */ // 0x806D9518
    /* li r5, 0 */ // 0x806D951C
    FUN_8064D8BC(r3, r4, r5); // bl 0x8064D8BC
    r3 = r27;
    /* li r4, 0x17e9 */ // 0x806D9528
    /* li r5, 0 */ // 0x806D952C
    FUN_8064D8C4(r5, r3, r4, r5); // bl 0x8064D8C4
    /* li r0, 0 */ // 0x806D9534
    *(0x820 + r27) = r0; // stw @ 0x806D9538
    r3 = r25;
    /* li r4, 0x52 */ // 0x806D9540
    r12 = *(0 + r25); // lwz @ 0x806D9544
    /* li r5, 0 */ // 0x806D9548
    r12 = *(0x24 + r12); // lwz @ 0x806D954C
    /* mtctr r12 */ // 0x806D9550
    /* bctrl  */ // 0x806D9554
    /* li r0, 2 */ // 0x806D9558
    *(0x2874 + r25) = r0; // stw @ 0x806D955C
    /* b 0x806d9a2c */ // 0x806D9560
    if (!=) goto 0x0x806d997c;
    /* lis r3, 0 */ // 0x806D956C
    r3 = *(0 + r3); // lwz @ 0x806D9570
    FUN_806F946C(r3); // bl 0x806F946C
    r0 = *(0 + r3); // lwz @ 0x806D9578
    r4 = r3;
    /* li r5, 0 */ // 0x806D9580
    /* li r6, 0 */ // 0x806D9584
    /* mtctr r0 */ // 0x806D9588
    if (<=) goto 0x0x806d95bc;
    r0 = *(4 + r4); // lwz @ 0x806D9594
    if (!=) goto 0x0x806d95b0;
    /* mulli r0, r6, 0x70 */ // 0x806D95A0
    r3 = r3 + r0; // 0x806D95A4
    r5 = r3 + 4; // 0x806D95A8
    /* b 0x806d95bc */ // 0x806D95AC
    r4 = r4 + 0x70; // 0x806D95B0
    r6 = r6 + 1; // 0x806D95B4
    if (counter-- != 0) goto 0x0x806d9594;
    if (==) goto 0x0x806d97a8;
    r0 = *(0xe + r5); // lbz @ 0x806D95C4
    if (==) goto 0x0x806d95dc;
    r0 = *(0xae + r27); // lbz @ 0x806D95D0
    if (!=) goto 0x0x806d95e4;
    /* li r4, 0 */ // 0x806D95DC
    /* b 0x806d961c */ // 0x806D95E0
    r3 = *(0xac + r27); // lhz @ 0x806D95E4
    /* li r4, 0 */ // 0x806D95E8
    r0 = *(0xc + r5); // lhz @ 0x806D95EC
    if (!=) goto 0x0x806d961c;
    r3 = *(0xaa + r27); // lbz @ 0x806D95F8
    r0 = *(0xa + r5); // lbz @ 0x806D95FC
    if (!=) goto 0x0x806d961c;
    r3 = *(0xa8 + r27); // lhz @ 0x806D9608
    r0 = *(8 + r5); // lhz @ 0x806D960C
    if (!=) goto 0x0x806d961c;
    /* li r4, 1 */ // 0x806D9618
    if (==) goto 0x0x806d96d0;
    /* lis r3, 0 */ // 0x806D9624
    r3 = *(0 + r3); // lwz @ 0x806D9628
    r3 = *(0 + r3); // lwz @ 0x806D962C
    r28 = *(0x2bc + r3); // lwz @ 0x806D9630
    if (!=) goto 0x0x806d9644;
    /* li r28, 0 */ // 0x806D963C
    /* b 0x806d9698 */ // 0x806D9640
    /* lis r26, 0 */ // 0x806D9644
    r26 = r26 + 0; // 0x806D9648
    if (==) goto 0x0x806d9694;
    r12 = *(0 + r28); // lwz @ 0x806D9650
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x806D9658
    /* mtctr r12 */ // 0x806D965C
    /* bctrl  */ // 0x806D9660
    /* b 0x806d967c */ // 0x806D9664
    if (!=) goto 0x0x806d9678;
    /* li r0, 1 */ // 0x806D9670
    /* b 0x806d9688 */ // 0x806D9674
    r3 = *(0 + r3); // lwz @ 0x806D9678
    if (!=) goto 0x0x806d9668;
    /* li r0, 0 */ // 0x806D9684
    if (==) goto 0x0x806d9694;
    /* b 0x806d9698 */ // 0x806D9690
    /* li r28, 0 */ // 0x806D9694
    r3 = r28;
    r4 = r27;
    /* clrlwi r5, r29, 0x18 */ // 0x806D96A0
    FUN_806D6C6C(r3, r4); // bl 0x806D6C6C
    r12 = *(0 + r25); // lwz @ 0x806D96A8
    r3 = r25;
    /* li r4, 0xad */ // 0x806D96B0
    /* li r5, 0 */ // 0x806D96B4
    r12 = *(0x24 + r12); // lwz @ 0x806D96B8
    /* mtctr r12 */ // 0x806D96BC
    /* bctrl  */ // 0x806D96C0
    /* li r0, 7 */ // 0x806D96C4
    *(0x2874 + r25) = r0; // stw @ 0x806D96C8
    /* b 0x806d9a2c */ // 0x806D96CC
    /* lis r3, 0 */ // 0x806D96D0
    r3 = *(0 + r3); // lwz @ 0x806D96D4
    r3 = *(0 + r3); // lwz @ 0x806D96D8
    r27 = *(0x150 + r3); // lwz @ 0x806D96DC
    if (!=) goto 0x0x806d96f0;
    /* li r27, 0 */ // 0x806D96E8
    /* b 0x806d9744 */ // 0x806D96EC
    /* lis r26, 0 */ // 0x806D96F0
    r26 = r26 + 0; // 0x806D96F4
    if (==) goto 0x0x806d9740;
    r12 = *(0 + r27); // lwz @ 0x806D96FC
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x806D9704
    /* mtctr r12 */ // 0x806D9708
    /* bctrl  */ // 0x806D970C
    /* b 0x806d9728 */ // 0x806D9710
    if (!=) goto 0x0x806d9724;
    /* li r0, 1 */ // 0x806D971C
    /* b 0x806d9734 */ // 0x806D9720
    r3 = *(0 + r3); // lwz @ 0x806D9724
    if (!=) goto 0x0x806d9714;
    /* li r0, 0 */ // 0x806D9730
    if (==) goto 0x0x806d9740;
    /* b 0x806d9744 */ // 0x806D973C
    /* li r27, 0 */ // 0x806D9740
    r12 = *(0 + r27); // lwz @ 0x806D9744
    r3 = r27;
    r12 = *(0x64 + r12); // lwz @ 0x806D974C
    /* mtctr r12 */ // 0x806D9750
    /* bctrl  */ // 0x806D9754
    r3 = r27;
    /* li r4, 0x17eb */ // 0x806D975C
    /* li r5, 0 */ // 0x806D9760
    FUN_8064D8BC(r3, r4, r5); // bl 0x8064D8BC
    r3 = r27;
    /* li r4, 0x17e9 */ // 0x806D976C
    /* li r5, 0 */ // 0x806D9770
    FUN_8064D8C4(r5, r3, r4, r5); // bl 0x8064D8C4
    /* li r0, 0 */ // 0x806D9778
    *(0x820 + r27) = r0; // stw @ 0x806D977C
    r3 = r25;
    /* li r4, 0x52 */ // 0x806D9784
    r12 = *(0 + r25); // lwz @ 0x806D9788
    /* li r5, 0 */ // 0x806D978C
    r12 = *(0x24 + r12); // lwz @ 0x806D9790
    /* mtctr r12 */ // 0x806D9794
    /* bctrl  */ // 0x806D9798
    /* li r0, 1 */ // 0x806D979C
    *(0x2874 + r25) = r0; // stw @ 0x806D97A0
    /* b 0x806d9a2c */ // 0x806D97A4
    r3 = r30;
    FUN_8065FAE4(r3); // bl 0x8065FAE4
    if (==) goto 0x0x806d9884;
    /* lis r3, 0 */ // 0x806D97B8
    r3 = *(0 + r3); // lwz @ 0x806D97BC
    r3 = *(0 + r3); // lwz @ 0x806D97C0
    r27 = *(0x14c + r3); // lwz @ 0x806D97C4
    if (!=) goto 0x0x806d97d8;
    /* li r27, 0 */ // 0x806D97D0
    /* b 0x806d982c */ // 0x806D97D4
    /* lis r26, 0 */ // 0x806D97D8
    r26 = r26 + 0; // 0x806D97DC
    if (==) goto 0x0x806d9828;
    r12 = *(0 + r27); // lwz @ 0x806D97E4
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x806D97EC
    /* mtctr r12 */ // 0x806D97F0
    /* bctrl  */ // 0x806D97F4
    /* b 0x806d9810 */ // 0x806D97F8
    if (!=) goto 0x0x806d980c;
    /* li r0, 1 */ // 0x806D9804
    /* b 0x806d981c */ // 0x806D9808
    r3 = *(0 + r3); // lwz @ 0x806D980C
    if (!=) goto 0x0x806d97fc;
    /* li r0, 0 */ // 0x806D9818
    if (==) goto 0x0x806d9828;
    /* b 0x806d982c */ // 0x806D9824
    /* li r27, 0 */ // 0x806D9828
    r12 = *(0 + r27); // lwz @ 0x806D982C
    r3 = r27;
    r12 = *(0x64 + r12); // lwz @ 0x806D9834
    /* mtctr r12 */ // 0x806D9838
    /* bctrl  */ // 0x806D983C
    r12 = *(0 + r27); // lwz @ 0x806D9840
    r3 = r27;
    /* li r4, 0x17df */ // 0x806D9848
    /* li r5, 0 */ // 0x806D984C
    r12 = *(0x68 + r12); // lwz @ 0x806D9850
    /* mtctr r12 */ // 0x806D9854
    /* bctrl  */ // 0x806D9858
    r12 = *(0 + r25); // lwz @ 0x806D985C
    r3 = r25;
    /* li r4, 0x51 */ // 0x806D9864
    /* li r5, 0 */ // 0x806D9868
    r12 = *(0x24 + r12); // lwz @ 0x806D986C
    /* mtctr r12 */ // 0x806D9870
    /* bctrl  */ // 0x806D9874
    /* li r0, 0xf */ // 0x806D9878
    *(0x2874 + r25) = r0; // stw @ 0x806D987C
    /* b 0x806d9a2c */ // 0x806D9880
    /* lis r3, 0 */ // 0x806D9884
    r3 = *(0 + r3); // lwz @ 0x806D9888
    FUN_806E69B4(r3); // bl 0x806E69B4
    if (==) goto 0x0x806d98a4;
    r3 = r25;
    FUN_806D9D54(r3); // bl 0x806D9D54
    /* b 0x806d9a2c */ // 0x806D98A0
    /* lis r3, 0 */ // 0x806D98A4
    r3 = *(0 + r3); // lwz @ 0x806D98A8
    r3 = *(0 + r3); // lwz @ 0x806D98AC
    r27 = *(0x150 + r3); // lwz @ 0x806D98B0
    if (!=) goto 0x0x806d98c4;
    /* li r27, 0 */ // 0x806D98BC
    /* b 0x806d9918 */ // 0x806D98C0
    /* lis r26, 0 */ // 0x806D98C4
    r26 = r26 + 0; // 0x806D98C8
    if (==) goto 0x0x806d9914;
    r12 = *(0 + r27); // lwz @ 0x806D98D0
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x806D98D8
    /* mtctr r12 */ // 0x806D98DC
    /* bctrl  */ // 0x806D98E0
    /* b 0x806d98fc */ // 0x806D98E4
    if (!=) goto 0x0x806d98f8;
    /* li r0, 1 */ // 0x806D98F0
    /* b 0x806d9908 */ // 0x806D98F4
    r3 = *(0 + r3); // lwz @ 0x806D98F8
    if (!=) goto 0x0x806d98e8;
    /* li r0, 0 */ // 0x806D9904
    if (==) goto 0x0x806d9914;
    /* b 0x806d9918 */ // 0x806D9910
    /* li r27, 0 */ // 0x806D9914
    r12 = *(0 + r27); // lwz @ 0x806D9918
    r3 = r27;
    r12 = *(0x64 + r12); // lwz @ 0x806D9920
    /* mtctr r12 */ // 0x806D9924
    /* bctrl  */ // 0x806D9928
    r3 = r27;
    /* li r4, 0x17e8 */ // 0x806D9930
    /* li r5, 0 */ // 0x806D9934
    FUN_8064D8BC(r3, r4, r5); // bl 0x8064D8BC
    r3 = r27;
    /* li r4, 0x17e9 */ // 0x806D9940
    /* li r5, 0 */ // 0x806D9944
    FUN_8064D8C4(r5, r3, r4, r5); // bl 0x8064D8C4
    /* li r0, 0 */ // 0x806D994C
    *(0x820 + r27) = r0; // stw @ 0x806D9950
    r3 = r25;
    /* li r4, 0x52 */ // 0x806D9958
    r12 = *(0 + r25); // lwz @ 0x806D995C
    /* li r5, 0 */ // 0x806D9960
    r12 = *(0x24 + r12); // lwz @ 0x806D9964
    /* mtctr r12 */ // 0x806D9968
    /* bctrl  */ // 0x806D996C
    /* li r0, 2 */ // 0x806D9970
    *(0x2874 + r25) = r0; // stw @ 0x806D9974
    /* b 0x806d9a2c */ // 0x806D9978
    r0 = r24 + -0x25; // 0x806D997C
    if (>) goto 0x0x806d9a2c;
    r3 = *(0 + r31); // lwz @ 0x806D9988
    r3 = *(0 + r3); // lwz @ 0x806D998C
    r28 = *(0x2bc + r3); // lwz @ 0x806D9990
    if (!=) goto 0x0x806d99a4;
    /* li r28, 0 */ // 0x806D999C
    /* b 0x806d99f8 */ // 0x806D99A0
    /* lis r26, 0 */ // 0x806D99A4
    r26 = r26 + 0; // 0x806D99A8
    if (==) goto 0x0x806d99f4;
    r12 = *(0 + r28); // lwz @ 0x806D99B0
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x806D99B8
    /* mtctr r12 */ // 0x806D99BC
    /* bctrl  */ // 0x806D99C0
    /* b 0x806d99dc */ // 0x806D99C4
    if (!=) goto 0x0x806d99d8;
    /* li r0, 1 */ // 0x806D99D0
    /* b 0x806d99e8 */ // 0x806D99D4
    r3 = *(0 + r3); // lwz @ 0x806D99D8
    if (!=) goto 0x0x806d99c8;
    /* li r0, 0 */ // 0x806D99E4
    if (==) goto 0x0x806d99f4;
    /* b 0x806d99f8 */ // 0x806D99F0
    /* li r28, 0 */ // 0x806D99F4
    r3 = r28;
    r4 = r27;
    /* clrlwi r5, r29, 0x18 */ // 0x806D9A00
    FUN_806D6C6C(r3, r4); // bl 0x806D6C6C
    r12 = *(0 + r25); // lwz @ 0x806D9A08
    r3 = r25;
    /* li r4, 0xad */ // 0x806D9A10
    /* li r5, 0 */ // 0x806D9A14
    r12 = *(0x24 + r12); // lwz @ 0x806D9A18
    /* mtctr r12 */ // 0x806D9A1C
    /* bctrl  */ // 0x806D9A20
    /* li r0, 7 */ // 0x806D9A24
    *(0x2874 + r25) = r0; // stw @ 0x806D9A28
    r0 = *(0x2f4 + r1); // lwz @ 0x806D9A30
    return;
}