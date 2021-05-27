def list names
    # TODO
    if(names.length == 1) 
      return names[0][:name]
    end
    indexAmp = names.length - 2
    result = ""
    names.each_with_index do |hash, index|
        result += hash[:name]
        if index == indexAmp 
          result += " & "
        elsif index != names.length - 1
          result += ", "
        end
    end
    result
  end