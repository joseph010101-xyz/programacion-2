object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 499
  ClientWidth = 708
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -20
  Font.Name = 'Trebuchet MS'
  Font.Style = [fsBold]
  Menu = MainMenu1
  TextHeight = 26
  object Label1: TLabel
    Left = 48
    Top = 24
    Width = 229
    Height = 25
    Caption = 'INGRESE UN VALOR'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 48
    Top = 104
    Width = 139
    Height = 25
    Caption = 'RESULTADO'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 464
    Top = 24
    Width = 46
    Height = 25
    Caption = 'pos1'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 464
    Top = 93
    Width = 46
    Height = 25
    Caption = 'pos2'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object lb_n2: TLabel
    Left = 35
    Top = 359
    Width = 273
    Height = 135
    Caption = 'laura'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -120
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 416
    Top = 240
    Width = 40
    Height = 26
    Caption = 'dig1'
  end
  object Label6: TLabel
    Left = 512
    Top = 240
    Width = 40
    Height = 26
    Caption = 'dig2'
  end
  object ENumero: TEdit
    Left = 48
    Top = 56
    Width = 121
    Height = 33
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
  end
  object EResultado: TEdit
    Left = 48
    Top = 144
    Width = 121
    Height = 33
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
  end
  object BtnSetN: TButton
    Left = 35
    Top = 200
    Width = 75
    Height = 25
    Caption = 'SetN'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    OnClick = BtnSetNClick
  end
  object BtnGetN: TButton
    Left = 144
    Top = 200
    Width = 75
    Height = 25
    Caption = 'GetN'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    OnClick = BtnGetNClick
  end
  object BtnFactorial: TButton
    Left = 291
    Top = 200
    Width = 89
    Height = 33
    Caption = 'factorial'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
    OnClick = BtnFactorialClick
  end
  object Epos1: TEdit
    Left = 464
    Top = 56
    Width = 121
    Height = 33
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 5
  end
  object Epos2: TEdit
    Left = 464
    Top = 128
    Width = 121
    Height = 33
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 6
  end
  object ed_dig1: TEdit
    Left = 416
    Top = 272
    Width = 73
    Height = 33
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 7
    Text = 'ed_dig1'
  end
  object ed_dig2: TEdit
    Left = 512
    Top = 272
    Width = 73
    Height = 33
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 8
    Text = 'ed_dig2'
  end
  object btn_interca: TButton
    Left = 160
    Top = 296
    Width = 75
    Height = 25
    Caption = 'btn_interca'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 9
  end
  object MainMenu1: TMainMenu
    Left = 648
    Top = 432
    object Funciones: TMenuItem
      Caption = 'Funciones'
      object EliminarDigPares: TMenuItem
        Caption = 'Eliminar Digitos Pares'
        OnClick = EliminarDigParesClick
      end
      object DigitoMayor: TMenuItem
        Caption = 'Devolver Digito Mayor'
        OnClick = DigitoMayorClick
      end
      object contarInversiones: TMenuItem
        Caption = 'Contar Inversiones'
        OnClick = contarInversionesClick
      end
      object VolcarNumeros: TMenuItem
        Caption = 'Volcar Numeros'
        OnClick = VolcarNumerosClick
      end
      object DecimalAOctal1: TMenuItem
        Caption = 'Decimal A Octal'
        OnClick = DecimalAOctal1Click
      end
      object DevolverElMasRepetido: TMenuItem
        Caption = 'Devolver El Mas Repetido'
        OnClick = DevolverElMasRepetidoClick
      end
    end
    object Procedimiento1: TMenuItem
      Caption = 'Procedimiento'
      object EliminarDigitoPrimo1: TMenuItem
        Caption = 'Eliminar Digito Primo'
        OnClick = EliminarDigitoPrimo1Click
      end
      object NumeroPerfecto: TMenuItem
        Caption = 'Verificar Si El Numero Es Perfecto'
        OnClick = NumeroPerfectoClick
      end
      object EliminarRango: TMenuItem
        Caption = 'Eliminar Rango'
        OnClick = EliminarRangoClick
      end
      object intercalar1: TMenuItem
        Caption = 'Intercalar'
        OnClick = intercalar1Click
      end
      object IntercambiarPorPos: TMenuItem
        Caption = 'Intercambiar posicion'
        OnClick = IntercambiarPorPosClick
      end
    end
  end
end
