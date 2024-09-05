object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 464
  ClientWidth = 1078
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Menu = MainMenu1
  TextHeight = 15
  object Label1: TLabel
    Left = 728
    Top = 56
    Width = 70
    Height = 31
    Caption = 'Label1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object ECad: TEdit
    Left = 104
    Top = 85
    Width = 361
    Height = 36
    TabOrder = 0
    Text = 'ECad'
  end
  object EResultado: TEdit
    Left = 104
    Top = 200
    Width = 353
    Height = 33
    TabOrder = 1
    Text = 'EResultado'
  end
  object Button1: TButton
    Left = 192
    Top = 140
    Width = 75
    Height = 25
    Caption = 'setCadena'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 104
    Top = 140
    Width = 75
    Height = 25
    Caption = 'GetCadena'
    TabOrder = 3
    OnClick = Button2Click
  end
  object ECaracter1: TEdit
    Left = 513
    Top = 136
    Width = 121
    Height = 23
    TabOrder = 4
    Text = 'ECaracter1'
  end
  object ECaracter2: TEdit
    Left = 648
    Top = 136
    Width = 121
    Height = 23
    TabOrder = 5
    Text = 'ECaracter2'
  end
  object MainMenu1: TMainMenu
    Left = 592
    Top = 40
    object Funciones1: TMenuItem
      Caption = 'Funciones'
      object ContarVocales1: TMenuItem
        Caption = 'Contar Vocales'
        OnClick = ContarVocales1Click
      end
    end
    object Procedimientos1: TMenuItem
      Caption = 'Procedimientos'
      object Reemplazar1: TMenuItem
        Caption = 'Reemplazar'
        OnClick = Reemplazar1Click
      end
      object ReemplazarPalabra1: TMenuItem
        Caption = 'Reemplazar Palabra'
        OnClick = ReemplazarPalabra1Click
      end
      object MayuscualasaigualesyMinusculasdiferentes1: TMenuItem
        Caption = 'Mayuscualas a iguales y Minusculas diferentes '
        OnClick = MayuscualasaigualesyMinusculasdiferentes1Click
      end
    end
  end
end
